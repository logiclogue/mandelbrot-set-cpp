#include <iostream>
#include <complex>
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

int main()
{
    DrawerFactoryModel *model = new DrawerFactoryModel();

    model->x = 0;
    model->y = 0;
    model->width = 100;
    model->height = 40;
    model->ratio = 2.15;
    model->zoom = 4;
    model->iterations = 100;

    DrawerFactory factory;
    Drawer *drawer = factory.create_mandelbrot_set(model);

    drawer->draw();

    free(model);
    free(drawer);

    return 0;
}
