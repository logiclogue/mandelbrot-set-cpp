#include <complex>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    MandelbrotFunction::MandelbrotFunction(type_complex _c)
    {
        c = _c;
    }

    type_complex MandelbrotFunction::get()
    {
        return (z * z) + c;
    }

    void MandelbrotFunction::set()
    {
        z = get();
    }
}
