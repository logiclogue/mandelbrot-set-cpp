#include <complex>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    MandelbrotFunction::MandelbrotFunction()
    {

    }

    type_complex MandelbrotFunction::get(type_complex z, type_complex c)
    {
        return pow(z, 2) + c;
    }

    bool MandelbrotFunction::is_in_set(type_complex input)
    {
        type_float distance = abs(input);

        if (distance <= 2) {
            return true;
        }

        return false;
    }
}
