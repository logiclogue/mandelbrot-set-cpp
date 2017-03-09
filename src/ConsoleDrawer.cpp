#include <stdio.h>
#include "Drawer.hpp"
#include "ConsoleDrawer.hpp"
#include "Iterator.hpp"
#include "Translator.hpp"
#include "types.hpp"

using namespace Iterators;
using namespace Translators;

namespace Drawers
{
    ConsoleDrawer::ConsoleDrawer(Iterator *iterator, Translator *translator)
    {
        _iterator = iterator;
        _translator = translator;
    }

    void ConsoleDrawer::draw()
    {
        int x, y;
        int width = _translator->frame->width;
        int height = _translator->frame->height;
        type_complex coords;
        type_complex result;

        for (y = 0; y < height; y += 1) {
            for (x = 0; x < width; x += 1) {
                coords = _translator->translate_coords_to_complex(x, y);
                result = _iterator->iterate(coords);

                if (_iterator->func->is_in_set(result)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
}
