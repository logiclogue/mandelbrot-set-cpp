#include <complex>
#include "MultibrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    template <class T>
    MultibrotFunction<T>::MultibrotFunction(T power)
    {
        _power = power;
    }

    template <class T>
    type_complex MultibrotFunction<T>::get(type_complex z, type_complex c)
    {
        return pow(z, _power) + c;
    }

    template <class T>
    bool MultibrotFunction<T>::is_in_set(type_complex input)
    {
        type_float distance = abs(input);

        return distance <= 2;
    }
}
