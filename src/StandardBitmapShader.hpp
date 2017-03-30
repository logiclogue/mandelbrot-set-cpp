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

        unsigned char _get_red_component(int colour);
        unsigned char _get_green_component(int colour);
        unsigned char _get_blue_component(int colour);
        unsigned char _get_shade(
            unsigned char min_colour,
            unsigned char max_colour,
            type_float shade);

    public:
        StandardBitmapShader(int min_colour, int max_colour);

        unsigned char get_red(type_float shade);
        unsigned char get_green(type_float shade);
        unsigned char get_blue(type_float shade);
    };
}

#endif
