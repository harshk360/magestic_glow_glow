#include <Python.h>
#include <stdbool.h>

//Custom type to represent a section of the display
typedef struct LEDObject{
	void *placeholder;
}
typedef struct Coord{
	LEDObject obj;
	void *other;
}
typedef struct Set{
	Coord * coords;
	void *other;
}
typedef struct Circle{
	LEDObject obj;
	void *other;
}
typedef struct Letter{
	LEDObject obj;
	void *other;
}
typedef struct Message{
	Letter * letters;
	void *other;
}

typedef struct color_t{
	size_t r;
	size_t g;
	size_t b;
}

//Configuration methods, probably OK to have internal tracker
void init_arr(int row, int col);
void init_rad(int radius);

//Object creation methods
Coord * coord(int x, int y, color_t color, bool vis);
Set * set(LEDObject* list);
Circle * circle(int x, int y, int radius);
Letter * letter(int x, int y, int scale, char c);
Message * message(LEDObject *string);
LEDObject * picture(void *png);

//Mutation
int set_color(LEDObject *a, color_t color);
int slide(LEDObject *a, int direction, int speed, bool wrap);
int rotate(LEDObject *a, int direction, int speed);
int gradient(LEDObject *a, color_t *sequence, int speed, int terminate);
int draw(LEDObject *a, int *order, int speed);
int increment_color(LEDObject *a, int speed, int direction);
