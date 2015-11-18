#include <Python.h>
#include <stdbool.h>
#include "coord.h"

typedef struct Set{
	Coord * coords;
	void *other;
}

//Set Creation Methods
//Notice, sets can overlap, and mutating a set will bring it to front.
Set * set(Coord *list, color_t color, bool vis);
Set * join(Set *sets);
Set * line(int x1, int x2, int y1, int y2, int width, color_t color, bool vis);
Set * circle(int x_center, int y_center, int radius, color_t color, bool vis);
Set * star(int x_center, int y_center, int span, color_t color, bool vis);
Set * letter(int x_center, int y_center, int height, int width, color_t color, char c);
Set * message(Letter *string, color_t color, bool vis); 
Set * picture(void *png, int frac_size, bool vis);
Set * screen(); //to be able to manipulate the whole array at once

//Set and Coordinate Methods
int set_visibility(bool vis); 
int set_color(color_t color);
int relocate(int x_offset, int y_offset);
int slide(int radial_direction, int leds_per_second, int time_off_screen);
int gradient(color_t *sequence, int seconds_between_colors, int terminatation_time);
int increment_color(void (*algorithm) (color_t color), int iters_per_sec);

//Set methods only
Coord * get_cords(Set *a); 
int draw(int *coord_order, int sec_per_coord);
int scale(int frac_new_size, int seconds_transformation);
int rotate(bool direction, int seconds_transformation);


