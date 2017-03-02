#include "Translator.hpp"
#include "Camera.hpp"
#include "Frame.hpp"
#include "types.hpp"

using namespace Iterators;

namespace Translators
{
    Translator::Translator(
        Camera *_camera,
        Frame *_frame,
        Iterator *_iterator)
    {
        frame = _frame;
        camera = _camera;
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
