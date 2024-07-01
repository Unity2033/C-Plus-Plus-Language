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

    [SerializeField] RoadLine roadLine;
    [SerializeField] RoadLine previousLine;

    [SerializeField] float speed = 5.0f;
    [SerializeField] float positionX = 3.5f;

    private void OnEnable()
    {
        base.OnEnable();
        InputManager.Instance.keyAction += OnKeyUpdate;
    }

    void Start()
    {
        roadLine = RoadLine.MIDDLE;
        previousLine = RoadLine.MIDDLE;

        animator = GetComponent<Animator>();
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

        transform.position = Vector3.Lerp
        (
            transform.position,
            new Vector3(positionX * (float)roadLine, 0, 0),
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
}
