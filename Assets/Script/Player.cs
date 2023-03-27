using System.Buffers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] float speed = 1.0f;

    private int health = 100;
    private Vector2 direction;
    private SpriteRenderer spriteRenderer;
    private Rigidbody2D rigidBody2D;

    private void Start()
    {

        spriteRenderer = GetComponent<SpriteRenderer>();
        rigidBody2D = GetComponent<Rigidbody2D>();
      
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
            obj.Use();       
            Damage(monster);
        }
     }
}
