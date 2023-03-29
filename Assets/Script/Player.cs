using System.Buffers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.PlayerSettings;

public class Player : MonoBehaviour
{
    [SerializeField] float speed = 1.0f;
    [SerializeField] Material flashMaterial;

    private int health = 100;
    private Vector2 direction;
    private Rigidbody2D rigidBody2D;
    private Material originalMaterial;
    private SpriteRenderer spriteRenderer;

    WaitForSeconds wait = new WaitForSeconds(0.125f);

    private void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        rigidBody2D = GetComponent<Rigidbody2D>();

        originalMaterial = spriteRenderer.material;
    }

    public void Damage(Monster monster)
    {
        health -= monster.Health;
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
        rigidBody2D.velocity = direction.normalized
            * speed * Time.fixedDeltaTime;
    }

     public void OnTriggerEnter2D(Collider2D collision)
     {
        IAttack obj = collision.GetComponent<IAttack>();

        var monster = collision.GetComponent<Monster>();

        if (obj != null)
        {
            StartCoroutine(Flash());
            obj.Use();       
            Damage(monster);
        }
     }
}
