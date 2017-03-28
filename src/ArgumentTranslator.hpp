#ifndef ARGUMENT_TRANSLATOR_HPP
#define ARGUMENT_TRANSLATOR_HPP

namespace Translators
{
    class ArgumentTranslator {
    public:
        Factories::DrawerFactoryModel translate_arguments_to_model(
            int argc, char *argv[]);
    }
}

#endif
