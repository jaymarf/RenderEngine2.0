#include <iostream>
#include<GL\glew.h>
#include "Display.h"
#include "Shader.h"
int main(int argc, char** argv)
{
    Display display(800, 600, "Hello world");
    Shader shader("./res/basicShader");

    while (display.IsClosed())
    {
        display.Clear(0.0f, 0.0f, 1.0f, 0.0f);
        shader.Bind();
        display.SwapBuffers();
    }
    return 0;
}