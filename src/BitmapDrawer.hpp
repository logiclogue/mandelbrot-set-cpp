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
        unsigned char _file_header[14];
        unsigned char _info_header[40];
        unsigned char _pad[3];
        int *_width;
        int *_height;
        int _filesize;

    public:
        BitmapDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            const char *path);
        void draw();
    };
}

#endif
