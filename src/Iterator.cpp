#include "Iterator.hpp"
#include "Function.hpp"
#include "types.hpp"

using namespace Functions;

namespace Iterators
{
    Iterator::Iterator(Function *_func, int _iterations)
    {
        iterations = _iterations;
        func = _func;
    }

    type_complex Iterator::iterate(type_complex c)
    {
        int i;
        type_complex z;

        for (i = 0; i < iterations; i += 1) {
            z = func->get(z, c);

            if (!func->is_in_set(z)) {
                break;
            }
        }

        return z;
    }
}
