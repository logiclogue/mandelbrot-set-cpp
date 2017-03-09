#include <complex>
#include "MultibrotSet.hpp"
#include "types.hpp"

using namespace std;

namespace Sets
{
    template <class T>
    MultibrotSet<T>::MultibrotSet(T power)
    {
        _power = power;
    }

    template <class T>
    type_complex MultibrotSet<T>::get(type_complex z, type_complex c)
    {
        return pow(z, _power) + c;
    }

    template <class T>
    bool MultibrotSet<T>::is_in_set(type_complex input)
    {
        type_float distance = abs(input);

        return distance <= 2;
    }
}
