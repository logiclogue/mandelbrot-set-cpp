#ifndef MULTIBROT_FUNCTION_HPP
#define MULTIBROT_FUNCTION_HPP

#include "types.hpp"
#include "Function.hpp"

namespace Functions
{
    class MultibrotFunction : public Function {
        type_float power;

    public:
        MultibrotFunction(type_float power);
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#endif
