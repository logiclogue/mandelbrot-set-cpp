#ifndef DRAWER_HPP
#define DRAWER_HPP

#include "Translator.hpp"
#include "Function.hpp"

namespace Drawers
{
    class Drawer {
    public:
        Functions::Function function;
        Translators::Translator translator;

        virtual void draw();
    };
}

#endif
