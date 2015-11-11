#include "glowglow.h"

//static PyObject *methodName_methodName(PyObject *self, PyObject *args);
static PyObject *initArr_initArr(PyObject *self, PyObject *args);
static PyObject *initRad_initRad(PyObject *self, PyObject *args);

static PyObject *coord_coord(PyObject *self, PyObject *args);
static PyObject *set_set(PyObject *self, PyObject *args);
static PyObject *circle_circle(PyObject *self, PyObject *args);
static PyObject *letter_letter(PyObject *self, PyObject *args);
static PyObject *message_message(PyObject *self, PyObject *args);
static PyObject *picture_picture(PyObject *self, PyObject *args);

static PyObject *setColor_setColor(PyObject *self, PyObject *args);
static PyObject *slide_slide(PyObject *self, PyObject *args);
static PyObject *rotate_rotate(PyObject *self, PyObject *args);
static PyObject *gradient_gradient(PyObject *self, PyObject *args);
static PyObject *draw_draw(PyObject *self, PyObject *args);
static PyObject *incrementColor_incrementColor(PyObject *self, PyObject *args);

static char module_docstring[]=
	"This module provides an interface for addressable LED strips, implemented in C.";

//static char methodName_docstring[]=
//	"";
static char initArr_docstring[]=
	"";
static char initRad_docstring[]=
	"";

static char coord_docstring[]=
	"";
static char set_docstring[]=
	"";
static char circle_docstring[]=
	"";
static char letter_docstring[]=
	"";
static char message_docstring[]=
	"";
static char picture_docstring[]=
	"";

static char setColor_docstring[]=
	"";
static char slide_docstring[]=
	"";
static char rotate_docstring[]=
	"";
static char gradient_docstring[]=
	"";
static char draw_docstring[]=
	"";
static char incrementColor_docstring[]=
	"";

static PyMethodDef module_methods[] = {
	//{"methodName", methodName_methodName, METH_VARARGS, methodName_docstring},
	{"initArr", initArr_initArr, METH_VARARGS, initArr_docstring},
	{"initRad", initRad_initRad, METH_VARARGS, initRad_docstring},

	{"coord", coord_coord, METH_VARARGS, coord_docstring},
	{"set", set_set, METH_VARARGS, set_docstring},
	{"circle", circle_circle, METH_VARARGS, circle_docstring},
	{"letter", letter_letter, METH_VARARGS, letter_docstring},
	{"message", message_message, METH_VARARGS, message_docstring},
	{"picture", picture_picture, METH_VARARGS, picture_docstring},

	{"setColor", setColor_setColor, METH_VARARGS, setColor_docstring},
	{"slide", slide_slide, METH_VARARGS, slide_docstring},
	{"rotate", rotate_rotate, METH_VARARGS, rotate_docstring},
	{"gradient", gradient_gradient, METH_VARARGS, gradient_docstring},
	{"draw", draw_draw, METH_VARARGS, draw_docstring},
	{"incrementColor", incrementColor_incrementColor, METH_VARARGS, incrementColor_docstring},
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
