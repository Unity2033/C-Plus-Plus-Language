using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class UnitManager : MonoBehaviourPunCallbacks
{
    [SerializeField] float time = 5.0f;

    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            StartCoroutine(Create());
        }
    }

    public IEnumerator Create()
    {
        WaitForSeconds waitForSeconds = new WaitForSeconds(time);

        while (true)
        {
            PhotonNetwork.InstantiateRoomObject("Unit", Vector3.zero, Quaternion.identity);

            yield return waitForSeconds;
        }

    }
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.SetMasterClient(PhotonNetwork.PlayerList[0]);

        if (PhotonNetwork.IsMasterClient)
        {
            StartCoroutine(Create());
        }
    }
}

