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
    ConsoleDrawer::ConsoleDrawer(Iterator *_iterator, Translator *_translator)
    {
        iterator = _iterator;
        translator = _translator;
    }

    void ConsoleDrawer::draw()
    {
        int x, y;
        int width = translator->frame->width;
        int height = translator->frame->height;
        type_complex coords;
        type_complex result;

        for (y = 0; y < height; y += 1) {
            for (x = 0; x < width; x += 1) {
                coords = translator->translate_coords_to_complex(x, y);
                result = iterator->iterate(coords);

                if (iterator->func->is_in_set(result)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
}
