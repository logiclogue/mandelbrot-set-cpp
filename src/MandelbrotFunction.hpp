#ifndef MANDELBROT_FUNCTION_HPP
#define MANDELBROT_FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class MandelbrotFunction : public Function {
    private:
        type_complex z;
    public:
        MandelbrotFunction();
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#endif
