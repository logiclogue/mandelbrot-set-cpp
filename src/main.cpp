#include <iostream>
#include <complex>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"

using namespace std;
using namespace Functions;

int main()
{
    MandelbrotFunction func = MandelbrotFunction(0.1);

    func.set();

    cout << func.get() << endl;

    return 0;
}
