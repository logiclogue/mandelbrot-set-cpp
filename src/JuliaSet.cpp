#include "JuliaSet.hpp"
#include "MandelbrotSet.hpp"
#include "types.hpp"

namespace Sets
{
    JuliaSet::JuliaSet(type_complex c)
    {
        _set = new MandelbrotSet();
        _c = c;
    }

    JuliaSet::JuliaSet(Set *set, type_complex c)
    {
        _set = set;
        _c = c;
    }

    type_complex JuliaSet::get(type_complex z, type_complex nothing)
    {
        return _set->get(z, _c);
    }

    bool JuliaSet::is_in_set(type_complex input)
    {
        return _set->is_in_set(input);
    }
}
