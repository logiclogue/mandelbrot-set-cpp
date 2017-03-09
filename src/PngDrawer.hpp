#ifndef PNG_DRAWER_HPP
#define PNG_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

namespace Drawers
{
    class PngDrawer : public Drawer {
        Iterators::Iterator *_iterator;
        Translators::Translator *_translator;
        char *_path;
        FILE *_fp;
        bool _is_error;

    public:
        PngDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            char *path);
        void draw();
    };
}

#endif
