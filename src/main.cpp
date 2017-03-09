#include <iostream>
#include <complex>
#include "types.hpp"
#include "Set.hpp"
#include "MandelbrotSet.hpp"
#include "Iterator.hpp"
#include "ConsoleDrawer.hpp"
#include "Translator.hpp"

using namespace std;
using namespace Sets;
using namespace Iterators;
using namespace Drawers;
using namespace Translators;

int main()
{
    Set *set = new MandelbrotSet();
    Iterator *iterator = new Iterator(set, 100);
    Frame *frame = new Frame(160, 40, 2.15);
    Camera *camera = new Camera(0, 4);
    Translator *translator = new Translator(camera, frame);
    Drawer *drawer = new ConsoleDrawer(iterator, translator);

    drawer->draw();

    free(set);
    free(iterator);
    free(frame);
    free(camera);
    free(translator);
    free(drawer);

    return 0;
}
