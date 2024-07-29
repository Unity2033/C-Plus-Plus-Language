using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;

public class Name : MonoBehaviourPunCallbacks
{
    [SerializeField] string nickName;
    [SerializeField] InputField inputField;
    [SerializeField] Button nickNameSetButton;

    public void Set()
    {
        nickName = inputField.text;

        PhotonNetwork.NickName = nickName;

        PlayerPrefs.SetString("NickName", PhotonNetwork.NickName);

        Destroy(gameObject);
    }

    public void Update()
    {
        if(inputField.text.Length <= 0)
        {
            nickNameSetButton.interactable = false;
        }
        else
        {
            nickNameSetButton.interactable = true;
        }
    }

}
