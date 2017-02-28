#ifndef FRAME_HPP
#define FRAME_HPP

#include "Iterator.hpp"
#include "types.hpp"

namespace Frames
{
    class Frame {
    public:
        Frame(
            unsigned int pixel_width,
            unsigned int pixel_height,
            type_float value_per_pixels,
            Iterators::Iterator *iterator);
        int get_value(int x, int y);
    }
}

#endif
