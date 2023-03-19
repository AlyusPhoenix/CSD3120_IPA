import { MeshBuilder, Scene } from "babylonjs";
import { AdvancedDynamicTexture, TextBlock } from "babylonjs-gui";

export class TextPlane {
	public textBlock: TextBlock;
	constructor(
		name: string,
		width: number,
		height: number,
		x: number,
		y: number,
		z: number,
		text: string,
		backgroundColor: string,
		textColor: string,
		fontSize: number,
		scene: Scene
	) {
		// creates and initializes a plane
		const textPlane = MeshBuilder.CreatePlane(name + " text plane", {
			width: width,
			height: height,
		});
		textPlane.position.set(x, y, z);
		// creates and initializes a texure for the plane
		const planeTexture = AdvancedDynamicTexture.CreateForMesh(
			textPlane,
			width * 100,
			height * 100,
			false
		);
		planeTexture.background = backgroundColor;
		// creates and initializes a text block
		const planeText = new TextBlock(name + " plane text");
		planeText.text = text;
		planeText.color = textColor;
		planeText.fontSize = fontSize;
		planeTexture.addControl(planeText);

		this.textBlock = planeText;
	}
}
