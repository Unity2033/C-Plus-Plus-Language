using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Chat;

public class ChatManager : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField inputField;
    [SerializeField] Transform createTransform;

    void Update()
    {
        // if(Input.GetAxisRaw("Horizontal") != 0 || Input.GetAxisRaw("Vertical") != 0)
        // {
        //     inputField.readOnly = true;
        // }
        // else
        // {
        //     inputField.readOnly = false;
        // }

        if(Input.GetKeyDown(KeyCode.Return))
        {
            if (inputField.text.Length == 0) return;

            string dialog = PhotonNetwork.NickName + " : " + inputField.text;

            photonView.RPC("Chatting", RpcTarget.All, dialog);
        }
    }

    [PunRPC]
    public void Chatting(string message)
    {
        GameObject dialog = Instantiate(Resources.Load<GameObject>("String"));

        dialog.GetComponent<Text>().text = message;

        dialog.transform.SetParent(createTransform);

        inputField.ActivateInputField();

        inputField.text = "";
    }
}
