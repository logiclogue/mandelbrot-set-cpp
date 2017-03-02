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
        type_float complex_x = x;
        type_float complex_y = y;
        type_complex output(complex_x, complex_y);

        return output;
    }
}
