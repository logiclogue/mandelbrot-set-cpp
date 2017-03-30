#ifndef BITMAP_SHADER_HPP
#define BITMAP_SHADER_HPP

#include "types.hpp"

namespace Drawers::Shaders
{
    class BitmapShader
    {
    public:
        virtual unsigned char get_red(type_float shade) = 0;
        virtual unsigned char get_green(type_float shade) = 0;
        virtual unsigned char get_blue(type_float shade) = 0;
    };
}

#endif
