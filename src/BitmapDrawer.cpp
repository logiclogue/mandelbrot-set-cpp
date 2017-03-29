#include <cstring>
#include "BitmapDrawer.hpp"
#include "Translator.hpp"
#include "Iterator.hpp"

using namespace Translators;
using namespace Iterators;

namespace Drawers
{
    BitmapDrawer::BitmapDrawer(
        Iterator *iterator,
        Translator *translator)
    {
        _iterator = iterator;
        _translator = translator;
        _width = &translator->frame->width;
        _height = &translator->frame->height;
        _filesize = 54 + (3 * (*_width) * (*_height));
        _img = (unsigned char *)malloc(3 * (*_width) * (*_height));

        _file_header[0] = 'B';
        _file_header[1] = 'M';
        _file_header[2] = 0;
        _file_header[3] = 0;
        _file_header[4] = 0;
        _file_header[5] = 0;
        _file_header[6] = 0;
        _file_header[7] = 0;
        _file_header[8] = 0;
        _file_header[9] = 0;
        _file_header[10] = 54;
        _file_header[11] = 0;
        _file_header[12] = 0;
        _file_header[13] = 0;

        _info_header[0] = 40;
        _info_header[1] = 0;
        _info_header[2] = 0;
        _info_header[3] = 0;
        _info_header[4] = 0;
        _info_header[5] = 0;
        _info_header[6] = 0;
        _info_header[7] = 0;
        _info_header[8] = 0;
        _info_header[9] = 0;
        _info_header[10] = 0;
        _info_header[11] = 0;
        _info_header[12] = 1;
        _info_header[13] = 0;
        _info_header[14] = 24;
        _info_header[15] = 0;

        _pad[0] = 0;
        _pad[1] = 0;
        _pad[2] = 0;

        _file_header[2] = (unsigned char)(_filesize);
        _file_header[3] = (unsigned char)(_filesize >> 8);
        _file_header[4] = (unsigned char)(_filesize >> 16);
        _file_header[5] = (unsigned char)(_filesize >> 24);

        _info_header[4] = (unsigned char)((*_width));
        _info_header[5] = (unsigned char)((*_width) >> 8);
        _info_header[6] = (unsigned char)((*_width) >> 16);
        _info_header[7] = (unsigned char)((*_width) >> 24);
        _info_header[8] = (unsigned char)((*_height));
        _info_header[9] = (unsigned char)((*_height) >> 8);
        _info_header[10] = (unsigned char)((*_height) >> 16);
        _info_header[11] = (unsigned char)((*_height) >> 24);
    }

    void BitmapDrawer::draw()
    {
        int x, y, i;
        type_complex coords;
        type_complex result;
        int shade;

        for (x = 0; x < *_width; x += 1) {
            for (y = 0; y < *_height; y += 1) {
                coords = _translator->translate_coords_to_complex(x, y);
                result = _iterator->iterate(coords);
                shade = _get_shade();
                i = _get_current_index(x, y);

                _img[(3 * i) + 2] = 0;
                _img[(3 * i) + 1] = 0;

                if (_iterator->set->is_in_set(result)) {
                    _img[(3 * i) + 0] = 255;
                } else {
                    _img[(3 * i) + 0] = shade;
                }
            }
        }

        _output_image();
    }

    float BitmapDrawer::_get_shade()
    {
        float shade;
        float iteration_count = _iterator->iteration_count;
        float iterations = _iterator->iterations;

        shade = (iteration_count / iterations) * 255;

        return shade;
    }

    float BitmapDrawer::_get_current_index(int x, int y)
    {
        return x + (((*_height) - y - 1) * (*_width));
    }

    void BitmapDrawer::_output_image()
    {
        int j;

        fwrite(_file_header, 1, 14, stdout);
        fwrite(_info_header, 1, 40, stdout);

        for (j = 0; j < *_height; j += 1) {
            fwrite(_img + (j * (*_width) * 3), 3, *_width, stdout);
            fwrite(_pad, 1, (4 - ((*_width) * 3) % 4) % 4, stdout);
        }
    }
}
