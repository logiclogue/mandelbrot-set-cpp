#include "DrawerFactory.hpp"
#include "DrawerFactoryModel.hpp"
#include "Drawer.hpp"
#include "types.hpp"
#include "Set.hpp"
#include "MandelbrotSet.hpp"
#include "MultibrotSet.hpp"
#include "JuliaSet.hpp"
#include "Iterator.hpp"
#include "ConsoleDrawer.hpp"
#include "BitmapDrawer.hpp"
#include "HelpTextDrawer.hpp"
#include "Translator.hpp"

using namespace std;
using namespace Drawers;
using namespace Sets;
using namespace Iterators;
using namespace Drawers;
using namespace Translators;
using namespace Models;

namespace Factories
{
    Drawer *DrawerFactory::create_mandelbrot_set(DrawerFactoryModel *model)
    {
        Set *set = new MandelbrotSet();

        return create_drawer(model, set);
    }
    
    Drawer *DrawerFactory::create_multibrot_set(DrawerFactoryModel *model)
    {
        type_complex power(model->multi_r, model->multi_i);
        Set *set = new MultibrotSet<type_complex>(power);

        return create_drawer(model, set);
    }

    Drawer *DrawerFactory::create_multibrot_julia_set(DrawerFactoryModel *model)
    {
        type_complex c(model->julia_r, model->julia_i);
        type_complex power(model->multi_r, model->multi_i);
        Set *multibrot = new MultibrotSet<type_complex>(power);
        Set *set = new JuliaSet(multibrot, c);

        return create_drawer(model, set);
    }

    Drawer *DrawerFactory::create_julia_set(DrawerFactoryModel *model)
    {
        type_complex c(model->julia_r, model->julia_i);
        Set *set = new JuliaSet(c);

        return create_drawer(model, set);
    }

    Drawer *DrawerFactory::create_drawer(DrawerFactoryModel *model, Set *set)
    {
        type_complex focus(model->x, model->y);
        Iterator *iterator = new Iterator(set, model->iterations);
        Frame *frame = new Frame(model->width, model->height, model->ratio);
        Camera *camera = new Camera(focus, model->zoom);
        Translator *translator = new Translator(camera, frame);

        if (model->bitmap) {
            return new BitmapDrawer(iterator, translator);
        }

        return new ConsoleDrawer(iterator, translator);
    }

    Drawer *DrawerFactory::create_help_text(char *program_name)
    {
        return new HelpTextDrawer(program_name);
    }
}
