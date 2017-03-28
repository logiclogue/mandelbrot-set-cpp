#include <iostream>
#include <complex>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "types.hpp"
#include "Set.hpp"
#include "MandelbrotSet.hpp"
#include "Iterator.hpp"
#include "ConsoleDrawer.hpp"
#include "Translator.hpp"
#include "DrawerFactory.hpp"
#include "DrawerFactoryModel.hpp"
#include "ArgumentTranslator.hpp"

using namespace std;
using namespace Sets;
using namespace Iterators;
using namespace Drawers;
using namespace Translators;
using namespace Factories;
using namespace Models;

int main(int argc, char *argv[])
{
    ArgumentTranslator *translator = new ArgumentTranslator();
    DrawerFactoryModel *model;
    DrawerFactory factory;
    Drawer *drawer;

    model = translator->translate_arguments_to_model(argc, argv);

    if (model->is_julia_set && model->is_multibrot_set) {
        drawer = factory.create_multibrot_julia_set(model);
    } else if (model->is_julia_set) {
        drawer = factory.create_julia_set(model);
    } else if (model->is_multibrot_set) {
        drawer = factory.create_multibrot_set(model);
    } else if (model->is_help_text) {
        drawer = factory.create_help_text(argv[0]);
    } else {
        drawer = factory.create_mandelbrot_set(model);
    }

    drawer->draw();

    free(model);
    free(drawer);

    return 0;
}
