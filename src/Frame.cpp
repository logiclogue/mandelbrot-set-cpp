#include "Frame.hpp"

namespace Frames
{
    Frame::Frame(
        unsigned int _pixel_width,
        unsigned int _pixel_height,
        type_float _value_per_pixel_width,
        type_float _x_value,
        type_float _y_value,
        Iterators::Iterator *_iterator)
    {
        pixel_width = _pixel_width;
        pixel_height = _pixel_height;
        value_per_pixel_width = _value_per_pixel_width;
        iterator = _iterator;

        set_coords(_x_value, _y_value);
        set_value_per_pixel_width(_value_per_pixel_width);
    }

    int Frame::get_value(int x, int y)
    {
        
    }

    void Frame::reset_offset()
    {
        x_offset = camera->zoom / 2;
        y_offset = (camera->zoom * (pixel_height / pixel_width)) / 2;
    }
}
