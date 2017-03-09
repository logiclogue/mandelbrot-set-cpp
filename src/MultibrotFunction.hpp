#ifndef MULTIBROT_FUNCTION_HPP
#define MULTIBROT_FUNCTION_HPP

#include "types.hpp"
#include "Function.hpp"

namespace Functions
{
    template <class T>
    class MultibrotFunction : public Function {
        T _power;

    public:
        MultibrotFunction(T power);
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#include "MultibrotFunction.tcc"

#endif
