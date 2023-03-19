using Zinnia.Action;
using WebXR;
using Unity;

public class WebFloatY : FloatAction
{
    public WebXRController controller;
    private float yAxis;
    void Update()
    {
        var Vector2 = controller.GetAxis2D(WebXRController.Axis2DTypes.Thumbstick);
        yAxis = Vector2.y;
        Receive(yAxis);
    }
}
