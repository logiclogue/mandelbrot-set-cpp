#ifndef CONSOLE_DRAWER_HPP
#define CONSOLE_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

namespace Drawers
{
    class ConsoleDrawer : public Drawer {
        Iterators::Iterator *_iterator;
        Translators::Translator *_translator;

    public:
        ConsoleDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator);
        void draw();
    };
}

#endif
