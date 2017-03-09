#include <png.h>
#include "PngDrawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

using namespace Translators;
using namespace Iterators;

namespace Drawers
{
    PngDrawer::PngDrawer(
        Iterator *iterator,
        Translator *translator,
        char *path)
    {
        _iterator = iterator;
        _translator = translator;
        _path = path;

        _fp = fopen(_path, "wb");

        _is_error = !_fp;
    }

    void PngDrawer::draw()
    {
        
    }
}
