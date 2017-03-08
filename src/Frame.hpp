#ifndef FRAME_H
#define FRAME_H

namespace Translators
{
    class Frame {
    public:
        int width;
        int height;
        float height_ratio;

        Frame(int width, int height);
        Frame(int width, int height, float height_ratio);
    };
}

#endif
