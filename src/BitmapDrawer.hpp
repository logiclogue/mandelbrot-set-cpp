#ifndef PNG_DRAWER_HPP
#define PNG_DRAWER_HPP

#include "Drawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"
#include "BitmapShader.hpp"

namespace Drawers
{
    class BitmapDrawer : public Drawer
    {
        Iterators::Iterator *_iterator;
        Translators::Translator *_translator;
        Shaders::BitmapShader *_shader;
        unsigned char *_img;
        unsigned char _file_header[14];
        unsigned char _info_header[40];
        unsigned char _pad[3];
        int *_width;
        int *_height;
        int _filesize;

        void _init(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            Shaders::BitmapShader *shader);
        float _get_shade();
        float _get_current_index(int x, int y);
        void _output_image();

    public:
        BitmapDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator);
        BitmapDrawer(
            Iterators::Iterator *iterator,
            Translators::Translator *translator,
            Shaders::BitmapShader *shader);
        ~BitmapDrawer();
        void draw();
    };
}

#endif
