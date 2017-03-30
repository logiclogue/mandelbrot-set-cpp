#ifndef JULIA_FUNCTION_HPP
#define JULIA_FUNCTION_HPP

#include "types.hpp"
#include "Set.hpp"

namespace Sets
{
    class JuliaSet : public Set
    {
        Set *_set;
        type_complex _c;

    public:
        JuliaSet(type_complex c);
        JuliaSet(Set *set, type_complex c);
        type_complex get(type_complex z, type_complex c);
        bool is_in_set(type_complex input);
    };
}

#endif
