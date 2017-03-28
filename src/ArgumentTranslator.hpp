#ifndef ARGUMENT_TRANSLATOR_HPP
#define ARGUMENT_TRANSLATOR_HPP

#include "DrawerFactoryModel.hpp"

namespace Translators
{
    class ArgumentTranslator {
        void _set_default_model(Models::DrawerFactoryModel *model);

    public:
        Models::DrawerFactoryModel *translate_arguments_to_model(
            int argc, char *argv[]);
    };
}

#endif
