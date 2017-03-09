#include <complex>
#include <stdlib.h>
#include "Set.hpp"
#include "MandelbrotSet.hpp"
#include "MultibrotSet.hpp"
#include "types.hpp"

using namespace std;

namespace Sets
{
    MandelbrotSet::MandelbrotSet() : MultibrotSet<int>(2)
    {

    }
}
