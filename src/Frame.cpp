#include "Frame.hpp"
#include "types.hpp"

using namespace Iterators;

namespace Frames
{
    Frame::Frame(
        unsigned int _pixel_width,
        unsigned int _pixel_height,
        Camera *camera,
        Iterator *_iterator)
    {
        pixel_width = _pixel_width;
        pixel_height = _pixel_height;
        iterator = _iterator;
    }

    type_float Frame::get_value(int x, int y)
    {
        return 0;
    }

    void Frame::reset_offset()
    {
        x_offset = camera->zoom / 2;
        y_offset = (camera->zoom * (pixel_height / pixel_width)) / 2;
    }
}
