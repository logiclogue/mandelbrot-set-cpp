#include "Iterator.hpp"
#include "Function.hpp"

namespace Iterator
{
    Iterator::Iterator(Function _func, int _iterations)
    {
        iterations = _iterations;
        func = _func;
    }

    Iterator::iterate(type_complex input)
    {
        int i;

        for (i = 0; i < iterations; i += 1) {
            func.set(input);

            if (func.condition(input)) {
                break;
            }
        }

        func.reset();

        return func.get(input);
    }
}
