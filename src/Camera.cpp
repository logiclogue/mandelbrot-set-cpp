#include "Camera.hpp"
#include "types.hpp"

namespace Translators
{
    Camera::Camera(type_complex _focus, type_float _zoom)
    {
        focus = _focus;
        zoom = _zoom;
    }
}
