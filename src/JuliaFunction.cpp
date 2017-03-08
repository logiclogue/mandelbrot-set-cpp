#include "JuliaFunction.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

namespace Functions
{
    JuliaFunction::JuliaFunction(type_complex _c)
    {
        func = new MandelbrotFunction();
        c = _c;
    }

    JuliaFunction::JuliaFunction(Function *_func, type_complex _c)
    {
        func = _func;
        c = _c;
    }

    type_complex JuliaFunction::get(type_complex z, type_complex nothing)
    {
        return func->get(z, c);
    }

    bool JuliaFunction::is_in_set(type_complex input)
    {
        return func->is_in_set(input);
    }
}
