#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class Function {
    public:
        virtual type_complex get(type_complex input, int iterations) = 0;
        virtual type_complex condition(type_complex input) = 0;
    };
}

#endif
