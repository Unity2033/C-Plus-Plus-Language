using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoadLine
{
    LEFT   = -1,
    MIDDLE =  0,
    RIGHT  =  1,
}

[RequireComponent(typeof(Rigidbody))]
public class Runner : State
{
    [SerializeField] AudioClip sound;
    [SerializeField] Animator animator;
    [SerializeField] Rigidbody rigidBody;

    [SerializeField] RoadLine roadLine;
    [SerializeField] RoadLine previousLine;

    [SerializeField] bool jump = true;
    [SerializeField] float speed = 5.0f;
    [SerializeField] float power = 10.0f;
    [SerializeField] float positionX = 3.5f;

    private void OnEnable()
    {
        base.OnEnable();
        InputManager.Instance.keyAction += OnKeyUpdate;
    }

    void Awake()
    {
        roadLine = RoadLine.MIDDLE;
        previousLine = RoadLine.MIDDLE;

        animator = GetComponent<Animator>();
        rigidBody = GetComponent<Rigidbody>();

        Initialize();
    }

    public void Initialize()
    {
        animator.speed = SpeedManager.Speed / 20;
    }

    void OnKeyUpdate()
    {
        if (state == false) return;

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            previousLine = roadLine;

            if (roadLine != RoadLine.LEFT)
            {         
                roadLine--;

                SoundManager.Instance.Sound(sound);

                animator.Play("Left Move");
            }
        }

        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            previousLine = roadLine;

            if (roadLine != RoadLine.RIGHT)
            {
                roadLine++;

                SoundManager.Instance.Sound(sound);

                animator.Play("Right Move");
            }
        }

        if(jump && Input.GetKeyDown(KeyCode.Space))
        {
            Jump();
        }
    }

    public void Jump()
    {
        jump = false;

        animator.Play("Jump");

        rigidBody.AddForce(Vector3.up * power, ForceMode.Impulse);
    }

    public void Possible()
    {
        jump = true;

        animator.SetTrigger("Active");
    }

    public void RevertPosition()
    {
        roadLine = previousLine;
    }

    public void Die()
    {
        animator.Play("Die");
    }

    void Update()
    {
        Move();
    }

    public void Move()
    {
        if (state == false) return;

        rigidBody.position = Vector3.Lerp
        (
            rigidBody.position,
            new Vector3(positionX * (float)roadLine, rigidBody.position.y, 0),
            speed * Time.deltaTime
        );
    }

    private void OnDisable()
    {
        base.OnDisable();

        InputManager.Instance.keyAction -= OnKeyUpdate;
    }

    private void OnTriggerEnter(Collider other)
    {
        IHitable hitable = other.GetComponent<IHitable>();

        if(hitable != null)
        {
            hitable.Activate(this);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        IHitable hitable = collision.transform.GetComponent<IHitable>();

        if (hitable != null)
        {
            hitable.Activate(this);
        }
    }
}
