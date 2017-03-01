#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include "types.hpp"

namespace Frames
{
    class Translator {
    public:
        type_float translate_coord(type_float coord, type_float factor);
    }
}

#endif
