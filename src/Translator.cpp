#include "Translator.hpp"
#include "Camera.hpp"
#include "types.hpp"

using namespace Iterators;

namespace Translators
{
    Translator::Translator(
        unsigned int _pixel_width,
        unsigned int _pixel_height,
        Camera *camera,
        Iterator *_iterator)
    {
        pixel_width = _pixel_width;
        pixel_height = _pixel_height;
        iterator = _iterator;
    }

    type_float Translator::get_value(int x, int y)
    {
        type_complex input(x, y);
        type_float output = iterator->iterate(input);

        return output;
    }

    void Translator::reset_offset()
    {
        x_offset = camera->zoom / 2;
        y_offset = (camera->zoom * (pixel_height / pixel_width)) / 2;
    }
}
