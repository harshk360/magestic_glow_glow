#include <Python.h>
#include <stdbool.h>
#include "set.h"


//Configuration methods, probably OK to have internal tracker
void init_arr(int rows, int cols);
//no radial initializer for now

void startup();
void shutdown();

void set_live(); //real-time updating
void set_stall(); //freezes leds to "last_array_state" while mutators affect "next_array_state"

void set_update_speed(int frames_per_second);

private:
	int rows;
	int cols;
	int frames_per_sec;
	int ** last_array_state;
	int ** next_array_state;
	bool live;


