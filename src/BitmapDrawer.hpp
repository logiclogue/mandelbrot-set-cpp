#ifndef PNG_DRAWER_HPP
#define PNG_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

namespace Drawers
{
    class BitmapDrawer : public Drawer {
        Iterators::Iterator *_iterator;
        Translators::Translator *_translator;
        unsigned char *_img;

    public:
        BitmapDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            char *path);
        void draw();
    };
}

#endif
