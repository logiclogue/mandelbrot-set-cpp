#ifndef HELP_TEXT_DRAWER_HPP
#define HELP_TEXT_DRAWER_HPP

#include "Drawer.hpp"

namespace Drawers
{
    class HelpTextDrawer : public Drawer
    {
    public:
        HelpTextDrawer(char *program_name);
        void draw();

    private:
        int _length;
        char *_program_name;
    };
}

#endif
