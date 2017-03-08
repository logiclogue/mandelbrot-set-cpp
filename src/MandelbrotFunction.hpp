#ifndef MANDELBROT_FUNCTION_HPP
#define MANDELBROT_FUNCTION_HPP

#include "types.hpp"
#include "MultibrotFunction.hpp"

namespace Functions
{
    class MandelbrotFunction : public MultibrotFunction<int> {
    public:
        MandelbrotFunction();
    };
}

#endif
