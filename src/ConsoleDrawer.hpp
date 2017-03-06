#ifndef CONSOLE_DRAWER_HPP
#define CONSOLE_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Function.hpp"

namespace Drawers
{
    class ConsoleDrawer : Drawer {
    public:
        ConsoleDrawer(
            Functions::Function function,
            Translators::Translator translator);
        void draw();
    }
}

#endif
