#include <iostream>
#include <cstdio>
#include "HelpTextDrawer.hpp"

using namespace std;

char *help_text[] = {
    (char *)"Mandelbrot Set Drawer",
    (char *)"",
    (char *)"Usage:",
    (char *)" %s [arguments]",
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
    (char *)"                         (default 0)",
    (char *)" --julia-i     <number>  Draw a Julia Set with `+ c` as imaginary <number>",
    (char *)"                         (default 0)",
    (char *)" --multi-r     <number>  Draw a Multibrot Set with real <number> power",
    (char *)"                         (default 2)",
    (char *)" --multi-i     <number>  Draw a Multibrot Set with imaginary <number> power",
    (char *)"                         (default 0)"
};

namespace Drawers
{
    HelpTextDrawer::HelpTextDrawer(char *program_name)
    {
        _length = sizeof(help_text) / sizeof(*help_text);
        _program_name = program_name;
    }

    void HelpTextDrawer::draw()
    {
        int i;

        for (i = 0; i < _length; i += 1) {
            printf(help_text[i], _program_name);
            cout << endl;
        }
    }
}
