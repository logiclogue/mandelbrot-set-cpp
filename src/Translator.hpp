#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include "Iterator.hpp"
#include "Camera.hpp"
#include "types.hpp"

namespace Translators
{
    class Translator {
        type_float x_offset;
        type_float y_offset;

        void reset_offset();
    public:
        Camera *camera;
        Iterators::Iterator *iterator;
        unsigned int pixel_width;
        unsigned int pixel_height;

        Translator(
            unsigned int pixel_width,
            unsigned int pixel_height,
            Camera *camera,
            Iterators::Iterator *iterator);
        type_float get_value(int x, int y);
    };
}

#endif
