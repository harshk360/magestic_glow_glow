#include "glowglow.h"

//static PyObject *methodName_methodName(PyObject *self, PyObject *args);
static PyObject *initArr_initArr(PyObject *self, PyObject *args);
//static PyObject *initRad_initRad(PyObject *self, PyObject *args);
static PyObject *startup_startup(PyObject *self, PyObject *args);
static PyObject *shutdown_shutdown(PyObject *self, PyObject *args);
static PyObject *setLive_setLive(PyObject *self, PyObject *args);
static PyObject *setStall_setStall(PyObject *self, PyObject *args);
static PyObject *setUpdateSpeed_setUpdateSpeed(PyObject *self, PyObject *args);

static PyObject *coord_coord(PyObject *self, PyObject *args);

static PyObject *setVisibility_setVisibility(PyObject *self, PyObject *args);
static PyObject *setColor_setColor(PyObject *self, PyObject *args);
static PyObject *relocate_relocate(PyObject *self, PyObject *args);
static PyObject *slide_slide(PyObject *self, PyObject *args);
static PyObject *gradient_gradient(PyObject *self, PyObject *args);
static PyObject *incrementColor_incrementColor(PyObject *self, PyObject *args);

static PyObject *set_set(PyObject *self, PyObject *args);
static PyObject *join_join(PyObject *self, PyObject *args);
static PyObject *line_line(PyObject *self, PyObject *args);
static PyObject *circle_circle(PyObject *self, PyObject *args);
static PyObject *star_star(PyObject *self, PyObject *args);
static PyObject *letter_letter(PyObject *self, PyObject *args);
static PyObject *message_message(PyObject *self, PyObject *args);
static PyObject *picture_picture(PyObject *self, PyObject *args);
static PyObject *screen_screen(PyObject *self, PyObject *args);

static PyObject *getCoords_getCoords(PyObject *self, PyObject *args);
static PyObject *draw_draw(PyObject *self, PyObject *args);
static PyObject *scale_scale(PyObject *self, PyObject *args);
static PyObject *rotate_rotate(PyObject *self, PyObject *args);

static char module_docstring[]=
	"This module provides an interface for addressable LED strips, implemented in C.";

//static char methodName_docstring[]=
//	"";
static char initArr_docstring[]=
	"";
//static char initRad_docstring[]=
//	"";
static char startup_docstring[]=
	"";
static char shutdown_docstring[]=
	"";
static char setLive_docstring[]=
	"";
static char setStall_docstring[]=
	"";
static char setUpdateSpeed_docstring[]=
	"";

static char coord_docstring[]=
	"";

static char setVisibility_docstring[]=
	"";
static char setColor_docstring[]=
	"";
static char relocate_docstring[]=
	"";
static char slide_docstring[]=
	"";
static char gradient_docstring[]=
	"";
static char incrementColor_docstring[]=
	"";

static char set_docstring[]=
	"";
static char join_docstring[]=
	"";
static char line_docstring[]=
	"";
static char circle_docstring[]=
	"";
static char star_docstring[]=
	"";
static char letter_docstring[]=
	"";
static char message_docstring[]=
	"";
static char picture_docstring[]=
	"";
static char screen_docstring[]=
	"";

static char getCoords_docstring[]=
	"";
static char draw_docstring[]=
	"";
static char scale_docstring[]=
	"";
static char rotate_docstring[]=
	"";

static PyMethodDef module_methods[] = {
	//{"methodName", methodName_methodName, METH_VARARGS, methodName_docstring},
	{"init_arr", initArr_initArr, METH_VARARGS, initArr_docstring},
	//{"initRad", initRad_initRad, METH_VARARGS, initRad_docstring},
	{"startup", startup_startup, METH_VARARGS, startup_docstring},
	{"shutdown", shutdown_shutdown, METH_VARARGS, shutdown_docstring},
	{"set_live", setLive_setLive, METH_VARARGS, setLive_docstring},
	{"set_stall", setStall_setStall, METH_VARARGS, setStall_docstring},
	{"set_update_speed", setUpdateSpeed_setUpdateSpeed, METH_VARARGS, setUpdateSpeed_docstring},

	{"coord", coord_coord, METH_VARARGS, coord_docstring},

	{"set_visibility", setVisibility_setVisibility, METH_VARARGS, setVisibility_docstring},
	{"set_color", setColor_setColor, METH_VARARGS, setColor_docstring},
	{"relocate", relocate_relocate, METH_VARARGS, relocate_docstring},
	{"slide", slide_slide, METH_VARARGS, slide_docstring},
	{"gradient", gradient_gradient, METH_VARARGS, gradient_docstring},
	{"increment_color", incrementColor_incrementColor, METH_VARARGS, incrementColor_docstring},

	{"set", set_set, METH_VARARGS, set_docstring},
	{"join", join_join, METH_VARARGS, join_docstring},
	{"line", line_line, METH_VARARGS, line_docstring},
	{"circle", circle_circle, METH_VARARGS, circle_docstring},
	{"star", star_star, METH_VARARGS, star_docstring},
	{"letter", letter_letter, METH_VARARGS, letter_docstring},
	{"message", message_message, METH_VARARGS, message_docstring},
	{"picture", picture_picture, METH_VARARGS, picture_docstring},
	{"screen", screen_screen, METH_VARARGS, screen_docstring},

	{"get_coords", getCoords_getCoords, METH_VARARGS, getCoords_docstring},
	{"draw", draw_draw, METH_VARARGS, draw_docstring},
	{"scale", scale_scale, METH_VARARGS, scale_docstring},
	{"rotate", rotate_rotate, METH_VARARGS, rotate_docstring},
	{NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC init_funtimes(void){
	PyObject *m = Py_InitModule3("_glowglow", module_methods, module_docstring);
	if(m==NULL)
		return;
	//Import Python dependencies here
}

//static PyObject *methodName_methodName(PyObject *self, PyObject *args){
//	void *arg;	//Replace with arguments for the call.
//
//	if(!PyArg_ParseTuple(args,"O",&arg))	//Replace with right format string
//		return NULL;
//
//	void *value = methodName(arg);
//	PyObject *ret = Py_BuildValue("O",value);	//Replace with right format string
//	return ret;
//}
