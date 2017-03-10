#include <stdlib.h>
#include <complex>
#include "Iterator.hpp"
#include "Set.hpp"
#include "types.hpp"

using namespace Sets;
using namespace std;

namespace Iterators
{
    Iterator::Iterator(Set *_set, int _iterations)
    {
        iterations = _iterations;
        set = _set;
    }

    type_float Iterator::iterate(type_complex c)
    {
        int i;
        type_complex z = c;

        for (i = 0; i < iterations; i += 1) {
            z = set->get(z, c);

            if (!set->is_in_set(z)) {
                break;
            }
        }

        return abs(z);
    }
}
