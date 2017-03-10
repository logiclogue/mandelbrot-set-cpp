#include <iostream>
#include <complex>
#include <cstring>
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

    model->x = -0.75;
    model->y = 0;
    model->width = 90;
    model->height = 40;
    model->ratio = 2.15;
    model->zoom = 2.6;
    model->iterations = 100;

    int i;
    char *flag, *value;

    for (i = 0; i < argc - 1; i += 1) {
        flag = argv[i];
        value = argv[i + 1];

        if (!strcmp(flag, "-x")) {
            model->x = atof(value);
        } else if (!strcmp(flag, "-y")) {
            model->y = atof(value);
        } else if (!strcmp(flag, "-w")) {
            model->width = atoi(value);
        } else if (!strcmp(flag, "-h")) {
            model->height = atoi(value);
        } else if (!strcmp(flag, "-r")) {
            model->ratio = atof(value);
        } else if (!strcmp(flag, "-z")) {
            model->zoom = atof(value);
        } else if (!strcmp(flag, "-i")) {
            model->iterations = atoi(value);
        }
    }

    DrawerFactory factory;
    Drawer *drawer = factory.create_mandelbrot_set(model);

    drawer->draw();

    free(model);
    free(drawer);

    return 0;
}
