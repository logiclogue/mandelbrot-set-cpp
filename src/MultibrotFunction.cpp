#include <complex>
#include "MultibrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    MultibrotFunction::MultibrotFunction(type_float _power)
    {
        power = _power;
    }

    type_complex MultibrotFunction::get(type_complex z, type_complex c)
    {
        return pow(z, power) + c;
    }

    bool MultibrotFunction::is_in_set(type_complex input)
    {
        type_float distance = abs(input);

        return distance <= 2;
    }
}
