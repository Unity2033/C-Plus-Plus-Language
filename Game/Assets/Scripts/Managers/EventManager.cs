using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public enum EventType
{
    START    ,
    PAUSE    ,
    CONTINUE ,
    STOP
}

public class EventManager
{
    private static readonly IDictionary<EventType, UnityEvent> dictionary =
        new Dictionary<EventType, UnityEvent>();

    public static void Subscribe(EventType eventType, UnityAction listener)
    {
        UnityEvent unityEvent = null; 

        if(dictionary.TryGetValue(eventType, out unityEvent))
        {
            unityEvent.AddListener(listener);
        }
        else
        {
            unityEvent = new UnityEvent();
            unityEvent.AddListener(listener);
            dictionary.Add(eventType, unityEvent);
        }
    }

    public static void Unsubscribe(EventType eventType, UnityAction listener)
    {
        UnityEvent unityEvent = null;

        if(dictionary.TryGetValue(eventType, out unityEvent))
        {
            unityEvent.RemoveListener(listener);
        }
    }

    public static void Publish(EventType eventType)
    {
        UnityEvent unityEvent = null;

        if(dictionary.TryGetValue(eventType, out unityEvent))
        {
            unityEvent.Invoke();
        }
    }


}
