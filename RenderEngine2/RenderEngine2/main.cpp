#include <iostream>
#include<GL\glew.h>
#include "Display.h"

int main(int argc, char** argv)
{
    Display display(800, 600, "Hello world");
    while (display.IsClosed())
    {
        glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        display.SwapBuffers();
    }
    return 0;
}