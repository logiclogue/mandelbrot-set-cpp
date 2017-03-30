#ifndef DRAWER_FACTORY_MODEL_HPP
#define DRAWER_FACTORY_MODEL_HPP

#include "types.hpp"

namespace Models
{
    struct DrawerFactoryModel
    {
        type_float x;
        type_float y;
        type_float width;
        type_float height;
        type_float ratio;
        type_float zoom;
        int iterations;
        type_float julia_r;
        type_float julia_i;
        bool is_julia_set;
        type_float multi_r;
        type_float multi_i;
        bool is_multibrot_set;
        bool bitmap;
        bool is_help_text;
    };
}

#endif
