#include <iostream>
#include <complex>
#include "types.hpp"
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "Iterator.hpp"

using namespace std;
using namespace Functions;
using namespace Iterators;

int main()
{
    MandelbrotFunction *func = new MandelbrotFunction();
    Iterator *iterator = new Iterator(func, 100);

    type_complex result = iterator->iterate(0.1);

    cout << result << endl;
    
    free(func);
    free(iterator);

    return 0;
}
