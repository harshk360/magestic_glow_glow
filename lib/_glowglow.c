#include "glowglow.h"

//static PyObject *methodName_methodName(PyObject *self, PyObject *args);

static char module_docstring[]=
	"This module provides an interface for addressable LED strips, implemented in C.";

//static char methodName_docstring[]=
//	"";

static PyMethodDef module_methods[] = {
	//{"methodName", methodName_methodName, METH_VARARGS, methodName_docstring},
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
