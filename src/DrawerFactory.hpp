#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "types.hpp"
#include "Drawer.hpp"
#include "DrawerFactoryModel.hpp"
#include "Set.hpp"

namespace Factories
{
    class DrawerFactory {
    public:
        Drawers::Drawer *create_mandelbrot_set(DrawerFactoryModel *model);
        Drawers::Drawer *create_multibrot_set(
            DrawerFactoryModel *model, type_float power);
        Drawers::Drawer *create_multibrot_set(
            DrawerFactoryModel *model, type_complex power);
        Drawers::Drawer *create_julia_set(
            DrawerFactoryModel *model, type_complex c);
        Drawers::Drawer *create_set(DrawerFactoryModel *model, Sets::Set *set);
        Drawers::Drawer *create_help_text(char *program_name);
    };
}

#endif
