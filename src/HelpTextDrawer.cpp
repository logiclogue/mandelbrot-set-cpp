#include <iostream>
#include "HelpTextDrawer.hpp"

using namespace std;

char *help_text[] = {
    (char *)"Mandelbrot Set Drawer",
    (char *)"",
    (char *)"Usage:",
    (char *)" draw-mandelbrot-set [arguments]",
    (char *)"",
    (char *)"Arguments:",
    (char *)" --x-coord     <number>  X coordinate at the centre of the screen (default 0)",
    (char *)" --y-coord     <number>  Y coordinate at the centre of the screen (default 0)",
    (char *)" --width       <number>  Width of the image to draw (default 80)",
    (char *)" --height      <number>  Height of the image to draw (default 20)",
    (char *)" --ratio       <number>  Ratio of height/width (default 2)",
    (char *)" --zoom        <number>  Zoom, width of the screen (default 4)",
    (char *)" --iterations  <number>  Iterations (default 100)",
    (char *)" --julia-r     <number>  Draw a Julia Set with `+ c` as real <number>",
    (char *)" --julia-i     <number>  Draw a Julia Set with `+ c` as imaginary <number>",
    (char *)" --multi-r     <number>  Draw a Multibrot Set with real <number> power",
    (char *)" --multi-i     <number>  Draw a Multibrot Set with imaginary <number> power"
};

namespace Drawers
{
    HelpTextDrawer::HelpTextDrawer()
    {
        length = sizeof(help_text) / sizeof(*help_text);
    }

    void HelpTextDrawer::draw()
    {
        int i;

        for (i = 0; i < length; i += 1) {
            cout << help_text[i] << endl;
        }
    }
}