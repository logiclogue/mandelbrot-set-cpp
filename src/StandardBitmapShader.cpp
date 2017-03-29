#include "StandardBitmapShader.hpp"
#include "ShaderColour.hpp"
#include "types.hpp"

namespace Drawers::Shaders
{
    StandardBitmapShader::StandardBitmapShader(int min_colour, int max_colour)
    {
        _min_colour.red = _get_red_component(min_colour);
        _min_colour.green = _get_green_component(min_colour);
        _min_colour.blue = _get_red_component(min_colour);

        _max_colour.red = _get_red_component(max_colour);
        _max_colour.green = _get_green_component(max_colour);
        _max_colour.blue = _get_red_component(max_colour);
    }

    unsigned char StandardBitmapShader::getRed(type_float shade)
    {
        
    }

    unsigned char StandardBitmapShader::getGreen(type_float shade)
    {
        
    }

    unsigned char StandardBitmapShader::getBlue(type_float shade)
    {
        
    }
}
