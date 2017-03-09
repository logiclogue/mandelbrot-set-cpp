#include "JuliaFunction.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

namespace Functions
{
    JuliaFunction::JuliaFunction(type_complex c)
    {
        _func = new MandelbrotFunction();
        _c = c;
    }

    JuliaFunction::JuliaFunction(Function *func, type_complex c)
    {
        _func = func;
        _c = c;
    }

    type_complex JuliaFunction::get(type_complex z, type_complex nothing)
    {
        return _func->get(z, _c);
    }

    bool JuliaFunction::is_in_set(type_complex input)
    {
        return _func->is_in_set(input);
    }
}
