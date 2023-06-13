#include "utils.h"


void render_text(const char *text, float x, float y) {
	glRasterPos2f(x, y);

	for (const char *c = text; *c; ++c) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}


int random_int(int min, int max) {
	return rand() % ((max - min) + 1) + min;
}