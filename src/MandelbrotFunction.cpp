#include <complex>
#include <stdlib.h>
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "MultibrotFunction.hpp"
#include "types.hpp"

using namespace std;

namespace Functions
{
    MandelbrotFunction::MandelbrotFunction() : MultibrotFunction<int>(2)
    {

    }
}
