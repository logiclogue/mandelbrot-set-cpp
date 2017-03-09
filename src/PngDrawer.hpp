#ifndef PNG_DRAWER_HPP
#define PNG_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

namespace Drawers
{
    class PngDrawer : public Drawer {
        Iterators::Iterator *iterator;
        Translators::Translator *translator;
        char *path;
        FILE *fp;
        bool is_error;

    public:
        PngDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            char *path);
        void draw();
    };
}

#endif
