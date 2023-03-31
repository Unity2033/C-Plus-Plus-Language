using System;
using System.Buffers;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using static UnityEditor.FilePathAttribute;
using static UnityEditor.PlayerSettings;

public class Player : MonoBehaviour
{
    [SerializeField] float speed = 1.0f;
    [SerializeField] Material flashMaterial;

    static public Action<Monster> function;

    Vector3 convertedPosition;
    private int health = 100;
    public Vector2 direction;
    private Rigidbody2D rigidBody2D;
    private Material originalMaterial;
    private SpriteRenderer spriteRenderer;

    WaitForSeconds wait = new WaitForSeconds(0.125f);

    private void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        rigidBody2D = GetComponent<Rigidbody2D>();

        originalMaterial = spriteRenderer.material;
        function = Damage;
    }

    public void Damage(Monster monster)
    {
        health -= monster.Health;
        Debug.Log("캐릭터의 체력 : " + health);
    }

    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.y = Input.GetAxisRaw("Vertical");

        if (direction.x > 0)
        {
            spriteRenderer.flipX = true;
        }
        else if (direction.x < 0)
        {
            spriteRenderer.flipX = false;
        }
    }

    IEnumerator Flash()
    {
        spriteRenderer.material = flashMaterial;

        yield return wait;

        spriteRenderer.material = originalMaterial;
    }

    private void FixedUpdate()
    {
        convertedPosition = Camera.main.WorldToViewportPoint(rigidBody2D.position);

        convertedPosition.x = Mathf.Clamp(convertedPosition.x, 0.035f, 0.965f);

        convertedPosition.y = Mathf.Clamp(convertedPosition.y, 0.075f, 0.9125f);

        rigidBody2D.position = Camera.main.ViewportToWorldPoint(convertedPosition);

        rigidBody2D.velocity = direction.normalized
            * speed * Time.fixedDeltaTime;
    }

     public void OnTriggerEnter2D(Collider2D collision)
     {
        IAttack obj = collision.GetComponent<IAttack>();

        if (obj != null)
        {
            StartCoroutine(Flash());
            obj.Use();        
        }
     }
}
