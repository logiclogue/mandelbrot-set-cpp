#include <iostream>
#include <complex>
#include "types.hpp"
#include "Function.hpp"
#include "MandelbrotFunction.hpp"
#include "Iterator.hpp"
#include "ConsoleDrawer.hpp"
#include "Translator.hpp"

using namespace std;
using namespace Functions;
using namespace Iterators;
using namespace Drawers;
using namespace Translators;

int main()
{
    Function *func = new MandelbrotFunction();
    Iterator *iterator = new Iterator(func, 100);
    Frame *frame = new Frame(160, 40, 2.15);
    Camera *camera = new Camera(0, 4);
    Translator *translator = new Translator(camera, frame);
    Drawer *drawer = new ConsoleDrawer(iterator, translator);

    drawer->draw();

    free(func);
    free(iterator);
    free(frame);
    free(camera);
    free(translator);
    free(drawer);

    return 0;
}
