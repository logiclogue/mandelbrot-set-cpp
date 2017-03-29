#ifndef BITMAP_SHADER_HPP
#define BITMAP_SHADER_HPP

#include "types.hpp"

namespace Drawers::Shaders
{
    class BitmapShader
    {
    public:
        virtual unsigned char getRed(type_float shade) = 0;
        virtual unsigned char getGreen(type_float shade) = 0;
        virtual unsigned char getBlue(type_float shade) = 0;
    };
}

#endif
