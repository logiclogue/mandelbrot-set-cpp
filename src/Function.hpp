#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <complex>

using namespace std;

namespace Functions
{
    class Function {
    public:
        virtual complex<double> get() = 0;
    };
}

#endif
