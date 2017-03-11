#ifndef HELP_TEXT_DRAWER_HPP
#define HELP_TEXT_DRAWER_HPP

#include "Drawer.hpp"

namespace Drawers
{
    class HelpTextDrawer : public Drawer {
        int length;

    public:
        HelpTextDrawer();
        void draw();
    };
}

#endif
