#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include "Iterator.hpp"
#include "Camera.hpp"
#include "Frame.hpp"
#include "types.hpp"

namespace Translators
{
    class Translator {
        type_float x_offset;
        type_float y_offset;

        void reset_offset();
    public:
        Camera *camera;
        Frame *frame;
        Translator(
            Camera *camera,
            Frame *frame);
        type_float get_value(int x, int y);
    };
}

#endif
