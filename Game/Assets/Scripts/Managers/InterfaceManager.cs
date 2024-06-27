public interface IInteractable
{
    public void Interact();
}

public interface IHitable
{
    public void Activate(Runner runner);
}