#include <png.h>
#include "BitmapDrawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

using namespace Translators;
using namespace Iterators;

namespace Drawers
{
    BitmapDrawer::BitmapDrawer(
        Iterator *iterator,
        Translator *translator,
        char *path)
    {
        _iterator = iterator;
        _translator = translator;
    }

    void BitmapDrawer::draw()
    {
        
    }
}
