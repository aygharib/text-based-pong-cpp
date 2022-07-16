#pragma once

#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak();

void GLClearError();
bool GLLogCall();