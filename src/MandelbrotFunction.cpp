#include <complex>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    MandelbrotFunction::MandelbrotFunction()
    {
        reset();
    }

    type_complex MandelbrotFunction::get(type_complex c)
    {
        return pow(z, 2) + c;
    }

    type_complex MandelbrotFunction::set(type_complex c)
    {
        z = get(c);

        return z;
    }

    void MandelbrotFunction::reset()
    {
        z = 0;
    }

    bool MandelbrotFunction::condition(type_complex input)
    {
        type_float distance = abs(input);

        if (distance < 2) {
            return true;
        }

        return false;
    }
}
