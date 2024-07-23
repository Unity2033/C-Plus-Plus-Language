using UnityEngine;
using Photon.Pun;
using TMPro;
using UnityEngine.UI;

public class Information : MonoBehaviourPunCallbacks
{
    private string roomName;
    public TextMeshProUGUI textMeshProUGUI;

    public void ConnectRoom()
    {
        PhotonNetwork.JoinRoom(roomName);
    }

    public void SetData(string name, int currentStaff, int maxStaff)
    {
        roomName = name;

        textMeshProUGUI.fontSize = 50;
        textMeshProUGUI.color = Color.black;
        textMeshProUGUI.alignment = TextAlignmentOptions.Center;
        textMeshProUGUI.text = name + " ( " + currentStaff + " / " + maxStaff + ")";
    }
}
