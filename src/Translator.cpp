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
        frame = _frame;
        camera = _camera;
    }
}
