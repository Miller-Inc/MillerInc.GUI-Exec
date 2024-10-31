#include <iostream>
#include "lib/MillerInc.GUI-Library/include/GUI.h"

int main()
{
    Library::hello();

    Window window(800, 600, 0, 0, new std::string("Hello World!"));

    window.show();
    return 0;
}
