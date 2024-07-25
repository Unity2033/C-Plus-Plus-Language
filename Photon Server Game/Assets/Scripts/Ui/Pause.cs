using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Pause : MonoBehaviourPunCallbacks
{
    public void Resume()
    {
        Mouse.ActiveMouse(false, CursorLockMode.Locked);
    }

    public void Set()
    {

    }


    public void Quit()
    {
        PhotonNetwork.LeaveRoom();
    }

    public override void OnLeftRoom()
    {
        PhotonNetwork.LoadLevel("Photon Lobby");
    }

}
