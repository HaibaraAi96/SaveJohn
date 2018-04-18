using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class VirtualJoystick : MonoBehaviour, IDragHandler, IPointerUpHandler, IPointerDownHandler
{
	public Image bgImg;
	public Image joystickImg;
	public Vector3 InputDirection { set; get; }
	public bool IsDown = false;

	private void Start()
	{
		bgImg = GetComponent<Image>();
		joystickImg = GetComponentsInChildren<Image>()[1];
		InputDirection = Vector3.zero;
	}

	//EventSystems interfaces
	public virtual void OnDrag(PointerEventData ped)
	{
		Vector2 pos = Vector2.zero;
		if (RectTransformUtility.ScreenPointToLocalPointInRectangle
			(   bgImg.rectTransform,
				ped.position,
				ped.pressEventCamera,
				out pos))
		{
			pos.x = (pos.x / bgImg.rectTransform.sizeDelta.x);
			pos.y = (pos.y / bgImg.rectTransform.sizeDelta.y);

			float x = (bgImg.rectTransform.pivot.x == 1) ? -pos.x * 2 : pos.x * 2;
			float y = (bgImg.rectTransform.pivot.y == 1) ? -pos.y * 2 : pos.y * 2;

			/*Debug.Log ("X: " + x);
			Debug.Log ("Y: " + y);*/

			InputDirection = new Vector3(x, 0, y);
			InputDirection = (InputDirection.magnitude > 1) ? InputDirection.normalized : InputDirection;

			joystickImg.rectTransform.anchoredPosition = 
				new Vector3(InputDirection.x * (bgImg.rectTransform.sizeDelta.x / 3)
				, InputDirection.z * (bgImg.rectTransform.sizeDelta.y / 3));
		}
	}
	public virtual void OnPointerDown(PointerEventData ped)
	{
		IsDown = true;
		OnDrag(ped);
	}
	public virtual void OnPointerUp(PointerEventData ped)
	{
		IsDown = false;
		InputDirection = Vector3.zero;
		joystickImg.rectTransform.anchoredPosition = Vector3.zero;
	}
}