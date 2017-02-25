#ifndef MANDELBROT_FUNCTION_HPP
#define MANDELBROT_FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class MandelbrotFunction : public Function {
    public:
        type_complex get();
    };
}

#endif
