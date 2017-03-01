#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "types.hpp"
#include "Function.hpp"

namespace Iterators
{
    class Iterator {
    public:
        int iterations;
        Functions::Function *func;

        Iterator(Functions::Function *func, int iterations);
        type_float iterate(type_complex input);
    };
}

#endif
