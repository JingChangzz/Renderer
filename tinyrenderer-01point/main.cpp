#include "tgaimage.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);

int main(int argc, char** argv) {
	TGAImage image(400, 400, TGAImage::RGB);
	image.set(200, 200, red);
	image.set(100, 100, white);
	image.set(100, 120, white);
	image.set(120, 120, white);
	image.set(120, 100, white);
	image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
	image.write_tga_file("/Users/Renderer/tinyrenderer-01point/output.tga");
	return 0;
}
