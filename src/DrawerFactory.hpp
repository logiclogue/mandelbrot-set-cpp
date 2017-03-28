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
        Drawers::Drawer *create_mandelbrot_set(
            Models::DrawerFactoryModel *model);
        Drawers::Drawer *create_multibrot_set(
            Models::DrawerFactoryModel *model);
        Drawers::Drawer *create_multibrot_julia_set(
            Models::DrawerFactoryModel *model);
        Drawers::Drawer *create_julia_set(Models::DrawerFactoryModel *model);
        Drawers::Drawer *create_drawer(
            Models::DrawerFactoryModel *model, Sets::Set *set);
        Drawers::Drawer *create_help_text(char *program_name);
    };
}

#endif
