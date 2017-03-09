#ifndef MULTIBROT_FUNCTION_HPP
#define MULTIBROT_FUNCTION_HPP

#include "types.hpp"
#include "Set.hpp"

namespace Sets
{
    template <class T>
    class MultibrotSet : public Set {
        T _power;

    public:
        MultibrotSet(T power);
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#include "MultibrotSet.tcc"

#endif
