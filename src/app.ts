import { Engine, MeshBuilder, Scene } from "babylonjs";
import { AdvancedDynamicTexture, TextBlock } from "babylonjs-gui";

export class App {
    private engine: Engine;
    private canvas: HTMLCanvasElement;

    /**
     * Constructor for the App class
     * @param engine Engine from babylonjs to be linked to the app.
     * @param canvas HTMLCanvasElement to be linked to the app.
     * 
     */
    constructor(engine: Engine, canvas: HTMLCanvasElement) {
        this.engine = engine;
        this.canvas = canvas;
        console.log('app is running');
    }

    /**
     * Renders the interactive AR/VR scene when user clicks the "XR Format" button in
     * the XRAuthor interface.
     * @param canvasID is the string ID of the HTMLCanvasElement target to render the scene into
     * @param authoringData is a dict of dicts that contains various information from
     *                      other XRAuthor components, e.g., dicts of recordingData,
     *                      editingData, etc.
     * 
     */
    async createXRScene() {
        const scene = new Scene(this.engine);
        scene.createDefaultCameraOrLight();

        // creates and initializes a sphere
        const sphere = MeshBuilder.CreateSphere('sphere', { diameter: 1.3}, scene);
        sphere.position.y = 1;
        sphere.position.z = 5;

        // creates and initializes a plane
        const helloPlane = MeshBuilder.CreatePlane('hello plane', { size: 1.5 } );
        helloPlane.position.y = 0;
        helloPlane.position.z = 5;
        // creates and initializes a texure for the plane
        const helloTexture = AdvancedDynamicTexture.CreateForMesh(helloPlane);
        // creates and initializes a text block
        const helloText = new TextBlock('hello');
        helloText.text = 'Hello XR';
        helloText.color = 'purple';
        helloText.fontSize = 50;
        helloTexture.addControl(helloText);

        // keyboard controls to show debugLayer
        scene.onKeyboardObservable.add((kbInfo) => {
            switch (kbInfo.type) {
                case BABYLON.KeyboardEventTypes.KEYDOWN:
                    switch (kbInfo.event.key) {
                        case "[":
                            scene.debugLayer.show();
                        break
                    }
                break;
            }
        });

        const xr = await scene.createDefaultXRExperienceAsync({
            uiOptions: {
                sessionMode: 'immersive-vr'
                //sessionMode: 'immersive-ar'
            }
        });
        // only for debugging
        (window as any).xr = xr;
        //xr.baseExperience.featuresManager

        return scene;
    }
}