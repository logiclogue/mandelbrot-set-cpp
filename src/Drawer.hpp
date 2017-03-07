#ifndef DRAWER_HPP
#define DRAWER_HPP

#include "Translator.hpp"
#include "Function.hpp"

namespace Drawers
{
    class Drawer {
    public:
        virtual void draw() = 0;
    };
}

#endif
