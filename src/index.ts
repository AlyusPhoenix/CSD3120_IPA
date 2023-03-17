import { Engine } from "babylonjs";
import { App } from "./app";
//console.log('hello xr');

const canvas = document.getElementById('renderCanvas') as HTMLCanvasElement;
// const ctxt = canvas.getContext('2d');
// ctxt.font = '50px Arial';
// ctxt.fillText('Hello XR', 50, 50);

// creates new engine
const engine = new Engine(canvas, true);

const app = new App(engine, canvas);
const scenePromise = app.createXRScene(canvas.id);
// engine.runRenderLoop(() => {
//     scene.render();
// })

// Async VR scene
scenePromise.then(scene => {
    engine.runRenderLoop(() => {
        scene.render();
    })
})

window.addEventListener('resize', function() {
    engine.resize();
})