#include <png.h>
#include "PngDrawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

using namespace Translators;
using namespace Iterators;

namespace Drawers
{
    PngDrawer::PngDrawer(
        Iterator *_iterator,
        Translator *_translator,
        char *_path)
    {
        iterator = _iterator;
        translator = _translator;
        path = _path;

        fp = fopen(path, "wb");

        is_error = !fp;
    }

    void PngDrawer::draw()
    {
        
    }
}
