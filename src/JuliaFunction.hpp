#ifndef JULIA_FUNCTION_HPP
#define JULIA_FUNCTION_HPP

#include "types.hpp"
#include "Function.hpp"

namespace Functions
{
    class JuliaFunction : public Function {
        Function *func;
        type_complex c;

    public:
        JuliaFunction(type_complex c);
        JuliaFunction(Function *func, type_complex c);
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#endif
