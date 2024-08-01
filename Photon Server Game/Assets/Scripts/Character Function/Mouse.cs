using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mouse : MonoBehaviour
{
    [SerializeField] Ray ray;
    [SerializeField] Vector3 direction;
    [SerializeField] LayerMask layerMask;
    [SerializeField] RaycastHit raycastHit;
    [SerializeField] Transform rayPosition;

    void Start()
    {
        ActiveMouse(false, CursorLockMode.Locked);
    }

    public static void ActiveMouse(bool state, CursorLockMode mode)
    {
        Cursor.visible = state;
        Cursor.lockState = mode;
    }

    public void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            direction = Camera.main.ScreenPointToRay(Input.mousePosition).direction;

            ray = new Ray(rayPosition.position, direction);

            if (Physics.Raycast(ray, out raycastHit, Mathf.Infinity, layerMask))
            {

            }


        }
    }

}
