void scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe037880_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_1_0xe037880_Obj_mesh_layer_5_vtx_0);

	deltaX = (int)(-0.19999992847442627 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_courtyard() {
	scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe037880_Obj_mesh_layer_5_vtx_0();
};