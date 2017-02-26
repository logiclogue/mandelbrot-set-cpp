#include <complex>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    type_complex MandelbrotFunction::get(type_complex z, int iterations)
    {
        int i, z;

        for (i = 0; i < iterations; i += 1) {
            z = pow(z, 2) + c;
        }

        return z;
    }

    bool MandelbrotFunction::condition(type_complex z)
    {
        type_float distance = abs(z);

        if (distance < 2) {
            return true;
        }

        return false;
    }
}
