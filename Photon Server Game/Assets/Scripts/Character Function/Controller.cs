using TMPro;
using Photon.Pun;
using UnityEngine;
using Photon.Realtime;

[RequireComponent(typeof(Move))]
[RequireComponent(typeof(Mouse))]
[RequireComponent(typeof(Rotate))]
public class Controller : MonoBehaviourPunCallbacks
{
    [SerializeField] Move move;
    [SerializeField] Mouse mouse;
    [SerializeField] Rotate rotate;

    [SerializeField] Camera temporaryCamera;

    private void Awake()
    {
        move = GetComponent<Move>();
        mouse = GetComponent<Mouse>();
        rotate = GetComponent<Rotate>();
    }

    void Start()
    {
        // 현재 플레이어가 나 자신이라면
        if(photonView.IsMine)
        {
            Camera.main.gameObject.SetActive(false);
        }
        else
        {
            temporaryCamera.enabled = false;
            GetComponentInChildren<AudioListener>().enabled = false;
        }
    }

    void Update()
    {
        if (photonView.IsMine == false) return;

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Mouse.ActiveMouse(true, CursorLockMode.None);
        }

        move.OnMove(Input.GetAxisRaw("Horizontal"),0, Input.GetAxisRaw("Vertical"));

        rotate.OnRotate(0, Input.GetAxisRaw("Mouse X"), 0);
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.SetMasterClient(PhotonNetwork.PlayerList[0]);
       
    }
}
