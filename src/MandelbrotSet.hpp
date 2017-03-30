#ifndef MANDELBROT_FUNCTION_HPP
#define MANDELBROT_FUNCTION_HPP

#include "types.hpp"
#include "MultibrotSet.hpp"

namespace Sets
{
    class MandelbrotSet : public MultibrotSet<int>
    {
    public:
        MandelbrotSet();
    };
}

#endif
