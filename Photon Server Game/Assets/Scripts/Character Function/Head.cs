using Photon.Pun;
using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;


public class Head : MonoBehaviourPunCallbacks
{
    [SerializeField] float x;
    [SerializeField] float amount = 1.0f;
    [SerializeField] float speed = 200.0f;



    void Update()
    {
        if (photonView.IsMine == false) return;

        x += -Input.GetAxis("Mouse Y") * speed * Time.deltaTime;

        x = Mathf.Clamp(x, -55, 55); // 위, 아래 고정

        transform.localEulerAngles = new Vector3(x, 0, 0);
    }

    public IEnumerator Shake(float time)
    {
        Vector3 startVector = transform.localPosition;

        while(time > 0)
        {
            transform.localPosition = Random.insideUnitCircle * amount * Time.deltaTime;

            time -= Time.deltaTime;

            yield return null;  
        }

        transform.localPosition = startVector;
    }
}
