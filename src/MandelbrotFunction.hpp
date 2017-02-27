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
        type_complex get(type_complex input);
        type_complex set(type_complex input);
        bool condition(type_complex input);
        void reset();
    };
}

#endif
