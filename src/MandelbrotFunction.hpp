#ifndef MANDELBROT_FUNCTION_HPP
#define MANDELBROT_FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class MandelbrotFunction : public Function {
    private:
        type_complex z;
        type_complex c;
    public:
        MandelbrotFunction(type_complex c);
        type_complex get();
        void set();
    };
}

#endif
