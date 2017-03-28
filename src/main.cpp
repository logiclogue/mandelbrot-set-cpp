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

using namespace std;
using namespace Sets;
using namespace Iterators;
using namespace Drawers;
using namespace Translators;
using namespace Factories;

int main(int argc, char *argv[])
{
    DrawerFactoryModel *model = new DrawerFactoryModel();
    DrawerFactory factory;
    Drawer *drawer;

    model->x = 0;
    model->y = 0;
    model->width = 80;
    model->height = 20;
    model->ratio = 2;
    model->zoom = 4;
    model->iterations = 100;
    model->julia_r = 0;
    model->julia_i = 0;
    model->is_julia_set = false;
    model->multi_r = 2;
    model->multi_i = 0;
    model->is_multibrot_set = false;
    model->bitmap = false;

    int i;
    char *flag, *value;
    char set_code;
    char null_string[] = "";

    for (i = 0; i < argc; i += 1) {
        flag = argv[i];

        if (i == argc - 1) {
            value = null_string;
        } else {
            value = argv[i + 1];
        }

        if (!strcmp(flag, "--x-coord")) {
            model->x = atof(value);
        } else if (!strcmp(flag, "--y-coord")) {
            model->y = atof(value);
        } else if (!strcmp(flag, "--width")) {
            model->width = atoi(value);
        } else if (!strcmp(flag, "--height")) {
            model->height = atoi(value);
        } else if (!strcmp(flag, "--ratio")) {
            model->ratio = atof(value);
        } else if (!strcmp(flag, "--zoom")) {
            model->zoom = atof(value);
        } else if (!strcmp(flag, "--iterations")) {
            model->iterations = atoi(value);
        } else if (!strcmp(flag, "--julia-r")) {
            model->is_julia_set = true;
            model->julia_r = atof(value);
        } else if (!strcmp(flag, "--julia-i")) {
            model->is_julia_set = true;
            model->julia_i = atof(value);
        } else if (!strcmp(flag, "--multi-r")) {
            model->is_multibrot_set = true;
            model->multi_r = atof(value);
        } else if (!strcmp(flag, "--multi-i")) {
            model->is_multibrot_set = true;
            model->multi_i = atof(value);
        } else if (!strcmp(flag, "--help")) {
            model->is_help_text = true;
        } else if (!strcmp(flag, "--bitmap")) {
            model->bitmap = true;
        }
    }

    switch (set_code) {
    case 'j':
        drawer = factory.create_julia_set(
            model, type_complex(model->julia_r, model->julia_i));
        break;
    case 'm':
        drawer = factory.create_multibrot_set(
            model, type_complex(model->multi_r, model->multi_i));
        break;
    case 'h':
        drawer = factory.create_help_text(argv[0]);
        break;
    default:
        drawer = factory.create_mandelbrot_set(model);
    }

    drawer->draw();

    free(model);
    free(drawer);

    return 0;
}
