#include <chrono>
#include <iostream>
#include <thread>

#include "libs/MillerInc.GUI-Library/include/GUI.h"
#include "libs/MillerInc.GUI-Library/include/Window/Linux/LinuxWindow.h"

int main()
{
    Library::hello();

    CustomWindow* window = nullptr;

#if defined WINDOWS
    window = new WindowsWindow(800, 600, 100, 100, new std::string("Windows Window"));
#elif defined LINUX || defined DEBUG
    window = new LinuxWindow(800, 600, 100, 100, new std::string("Linux Window"));
#endif

#if defined LINUX || defined DEBUG
    if (auto* linux_window = dynamic_cast<LinuxWindow*>(window)) {
        linux_window->setWindowColor(0x00000F); // Set window color to black
        linux_window->setButtonColor(0x0000FF); // Set button color to black

        const std::string& lbl1 = "Button";
        const std::string& lbl2 = "Button";

        linux_window->addButton(new Button(1, 100, 10, 100, 100, lbl1));
        linux_window->addLabel(new Label(2, 10, 10, 10, 10, lbl2));

        linux_window->show();

        std::cout << "Window updated\n";
        linux_window->update();
        std::cout << "Window updated\n";
    }
#endif

    return 0;
}