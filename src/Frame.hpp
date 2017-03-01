#ifndef FRAME_HPP
#define FRAME_HPP

#include "Iterator.hpp"
#include "Camera.hpp"
#include "types.hpp"

namespace Frames
{
    class Frame {
        type_float x_offset;
        type_float y_offset;

        void reset_offset();
    public:
        Camera *camera;
        Iterators::Iterator *iterator;
        unsigned int pixel_width;
        unsigned int pixel_height;

        Frame(
            unsigned int pixel_width,
            unsigned int pixel_height,
            Camera *camera,
            Iterators::Iterator *iterator);
        type_float get_value(int x, int y);
    };
}

#endif
