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

namespace Factories
{
    Drawer *DrawerFactory::create_mandelbrot_set(DrawerFactoryModel *model)
    {
        Set *set = new MandelbrotSet();

        return create_set(model, set);
    }
    
    Drawer *DrawerFactory::create_multibrot_set(
        DrawerFactoryModel *model, type_float power)
    {
        Set *set = new MultibrotSet<type_float>(power);

        return create_set(model, set);
    }

    Drawer *DrawerFactory::create_multibrot_set(
        DrawerFactoryModel *model, type_complex power)
    {
        Set *set = new MultibrotSet<type_complex>(power);

        return create_set(model, set);
    }

    Drawer *DrawerFactory::create_julia_set(
        DrawerFactoryModel *model, type_complex c)
    {
        Set *set = new JuliaSet(c);

        return create_set(model, set);
    }

    Drawer *DrawerFactory::create_set(DrawerFactoryModel *model, Set *set)
    {
        type_complex focus(model->x, model->y);
        Iterator *iterator = new Iterator(set, model->iterations);
        Frame *frame = new Frame(model->width, model->height, model->ratio);
        Camera *camera = new Camera(focus, model->zoom);
        Translator *translator = new Translator(camera, frame);

        return new BitmapDrawer(iterator, translator, "img.bmp");
        //return new ConsoleDrawer(iterator, translator);
    }

    Drawer *DrawerFactory::create_help_text(char *program_name)
    {
        return new HelpTextDrawer(program_name);
    }
}
