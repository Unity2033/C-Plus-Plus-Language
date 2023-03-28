using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class FollowCamera : MonoBehaviour
{
    [SerializeField] Transform target;

    [SerializeField] float speed = 1f;
    [SerializeField] Vector3 offset;

    private void Start()
    {
        offset = transform.position - target.transform.position;
    }

    private void LateUpdate()
    {
        Vector3 targetPosition = target.position + offset;

        transform.position = Vector3.Lerp(transform.position, targetPosition, speed * Time.deltaTime);
    }

}
