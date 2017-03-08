#include "Translator.hpp"
#include "Camera.hpp"
#include "Frame.hpp"
#include "types.hpp"

using namespace Iterators;

namespace Translators
{
    Translator::Translator(
        Camera *_camera,
        Frame *_frame)
    {
        camera = _camera;
        frame = _frame;
    }

    type_complex Translator::translate_coords_to_complex(int x, int y)
    {
        type_float width = (type_float)frame->width;
        type_float height = (type_float)frame->height;
        float height_ratio = frame->height_ratio;

        type_float x_ratio = ((type_float)x / width) - 0.5;
        type_float y_ratio = ((type_float)y / height) - 0.5;

        type_float x_zoom = camera->zoom;
        type_float y_zoom = camera->zoom * (height / width) * height_ratio;

        type_float x_complex_non_shifted = x_ratio * x_zoom;
        type_float y_complex_non_shifted = y_ratio * y_zoom;

        type_complex non_shifted(x_complex_non_shifted, y_complex_non_shifted);
        type_complex output = camera->focus + non_shifted;

        return output;
    }
}
