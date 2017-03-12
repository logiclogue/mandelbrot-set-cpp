#ifndef HELP_TEXT_DRAWER_HPP
#define HELP_TEXT_DRAWER_HPP

#include "Drawer.hpp"

namespace Drawers
{
    class HelpTextDrawer : public Drawer {
        int _length;
        char *_program_name;

    public:
        HelpTextDrawer(char *program_name);
        void draw();
    };
}

#endif
