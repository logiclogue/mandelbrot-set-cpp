#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "types.hpp"
#include "Set.hpp"

namespace Iterators
{
    class Iterator
    {
    public:
        int iterations;
        int iteration_count;
        Sets::Set *set;

        Iterator(Sets::Set *set, int iterations);
        type_float iterate(type_complex input);
    };
}

#endif
