#ifndef STANDARD_BITMAP_SHADER
#define STANDARD_BITMAP_SHADER

#include "BitmapShader.hpp"
#include "ShaderColour.hpp"

namespace Drawers::Shaders
{
    class StandardBitmapShader : public BitmapShader
    {
        ShaderColour _min_colour;
        ShaderColour _max_colour;

    public:
        StandardBitmapShader(int min_colour, int max_colour);

        unsigned char getRed(type_float shade);
        unsigned char getGreen(type_float shade);
        unsigned char getBlue(type_float shade);
    };
}

#endif
