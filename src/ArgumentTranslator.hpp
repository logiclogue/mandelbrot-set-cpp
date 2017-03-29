#ifndef ARGUMENT_TRANSLATOR_HPP
#define ARGUMENT_TRANSLATOR_HPP

#include "DrawerFactoryModel.hpp"

namespace Translators
{
    class ArgumentTranslator {
        void _set_default_model(Models::DrawerFactoryModel *model);
        void _populate_model_from_arguments(
            Models::DrawerFactoryModel *model, int argc, char *argv[]);
        void _set_model_variable_from_argument(
            Models::DrawerFactoryModel *model, char *flag, char *value);

    public:
        Models::DrawerFactoryModel *translate_arguments_to_model(
            int argc, char *argv[]);
    };
}

#endif
