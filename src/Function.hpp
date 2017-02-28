#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class Function {
    public:
        virtual type_complex get(type_complex z, type_complex c) = 0;
        virtual bool is_in_set(type_complex input) = 0;
    };
}

#endif
