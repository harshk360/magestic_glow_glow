#include <Python.h>
#include <stdbool.h>

typedef struct Coord{
	int x;
	int y;
	void *other;
}

typedef struct color_t{
	size_t r;
	size_t g;
	size_t b;
}

//Coord Creation Methods
Coord * coord(int x, int y, color_t color, bool vis);

//Coordinate Methods
int set_visibility(bool vis); 
int set_color(color_t color);
int relocate(int x_offset, int y_offset);
int slide(int radial_direction, int leds_per_second, int time_off_screen);
int gradient(color_t *sequence, int seconds_between_colors, int terminatation_time);
int increment_color(void (*algorithm) (color_t color), int iters_per_sec);

