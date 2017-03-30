#ifndef FRACTAL_H
#define FRACTAL_H

#include "types.hpp"

namespace Fractals
{
    class Fractal
    {
    public:
        virtual type_complex get(type_complex values) = 0;
    }
}

#endif
