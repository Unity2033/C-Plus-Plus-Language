using Photon.Pun;
using UnityEngine;
using UnityEngine.UIElements;


public class Head : MonoBehaviourPunCallbacks
{
    [SerializeField] float x;
    [SerializeField] float speed = 200.0f;

    void Update()
    {
        if (photonView.IsMine == false) return;

        x = -Input.GetAxis("Mouse Y") * speed * Time.deltaTime;

        x = Mathf.Clamp(x, -90, 90); // 위, 아래 고정

        transform.eulerAngles = new Vector3(x, 0, 0);
    }
}
