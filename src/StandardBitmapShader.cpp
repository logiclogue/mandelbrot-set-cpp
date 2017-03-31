#include <cstdlib>
#include "StandardBitmapShader.hpp"
#include "ShaderColour.hpp"
#include "types.hpp"

namespace Drawers::Shaders
{
    StandardBitmapShader::StandardBitmapShader(int min_colour, int max_colour)
    {
        _min_colour.red = _get_red_component(min_colour);
        _min_colour.green = _get_green_component(min_colour);
        _min_colour.blue = _get_blue_component(min_colour);

        _max_colour.red = _get_red_component(max_colour);
        _max_colour.green = _get_green_component(max_colour);
        _max_colour.blue = _get_blue_component(max_colour);
    }

    unsigned char StandardBitmapShader::get_red(type_float shade)
    {
        return _get_shade(_min_colour.red, _max_colour.red, shade);
    }

    unsigned char StandardBitmapShader::get_green(type_float shade)
    {
        return _get_shade(_min_colour.green, _max_colour.green, shade);
    }

    unsigned char StandardBitmapShader::get_blue(type_float shade)
    {
        return _get_shade(_min_colour.blue, _max_colour.blue, shade);
    }

    unsigned char StandardBitmapShader::_get_red_component(int colour)
    {
        return (colour & 0xFF0000) >> 16;
    }

    unsigned char StandardBitmapShader::_get_green_component(int colour)
    {
        return (colour & 0x00FF00) >> 8;
    }

    unsigned char StandardBitmapShader::_get_blue_component(int colour)
    {
        return colour & 0x0000FF;
    }

    unsigned char StandardBitmapShader::_get_shade(
        unsigned char min_colour, unsigned char max_colour, type_float shade)
    {
        int diff = max_colour - min_colour;
        unsigned char output = (diff * shade) + min_colour;

        return output;
    }
}
