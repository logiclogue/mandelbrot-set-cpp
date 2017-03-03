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

    public:
        Camera *camera;
        Frame *frame;

        Translator(Camera *camera, Frame *frame);
        type_complex translate_coords_to_complex(int x, int y);
        type_complex translate_complex_to_coords(int x, int y);
    };
}

#endif
