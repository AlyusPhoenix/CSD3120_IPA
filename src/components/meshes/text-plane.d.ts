import { Scene } from 'babylonjs';
import { TextBlock } from 'babylonjs-gui';
export declare class TextPlane {
    textBlock: TextBlock;
    constructor(name: string, width: number, height: number, x: number, y: number, z: number, text: string, backgroundColor: string, textColor: string, fontSize: number, scene: Scene);
}
