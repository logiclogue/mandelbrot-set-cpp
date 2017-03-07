#include "Drawer.hpp"
#include "ConsoleDrawer.hpp"
#include "Function.hpp"
#include "Translator.hpp"

using namespace Functions;
using namespace Translators;

namespace Drawers
{
    ConsoleDrawer::ConsoleDrawer(Function *_function, Translator *_translator)
    {
        function = _function;
        translator = _translator;
    }

    void ConsoleDrawer::draw()
    {
        
    }
}
