#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "VertexBuffer.h"
#include "IndexBuffer.h"

namespace Application {
    struct ShaderProgramSource {
        std::string VertexSource;
        std::string FragmentSource;
    };

    static ShaderProgramSource ParseShader(const std::string& filepath);
    static unsigned int CompileShader(unsigned int type, const std::string& source);
    static unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader);
    int start();
}