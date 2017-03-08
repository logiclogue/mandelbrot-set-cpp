#include "Frame.hpp"

namespace Translators
{
    Frame::Frame(int _width, int _height)
    {
        width = _width;
        height = _height;
        height_ratio = 1;
    }

    Frame::Frame(int _width, int _height, float _height_ratio)
    {
        width = _width;
        height = _height;
        height_ratio = _height_ratio;
    }
}
