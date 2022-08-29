#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"

#include "glsl.h"

#define Rotacion 60
#define NUM_SEG 5

class Objeto_Cola
{
public:
	Objeto_Cola() {};
	void DibujarCola(float x, float y, float z);
};

