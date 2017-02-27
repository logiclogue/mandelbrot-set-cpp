#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "types.hpp"

namespace Functions
{
    class Function {
    public:
        virtual type_complex get(type_complex input) = 0;
        virtual type_complex set(type_complex input) = 0;
        virtual bool condition(type_complex input) = 0;
        virtual void reset() = 0;
    };
}

#endif
