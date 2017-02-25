#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class Function {
    public:
        virtual type_complex get() = 0;
        virtual void set() = 0;
    };
}

#endif
