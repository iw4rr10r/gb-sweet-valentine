#include <Gamebuino-Meta.h>
#include "Background.h"
#include "constants.h"

Background::Background() { }

Background::~Background() = default;

void Background::draw(uint8_t sliceY, uint8_t sliceHeight, uint16_t* buffer) {
    memcpy(buffer, BACKGROUND_BITMAP+(sliceY*SCREEN_WIDTH), 2*SCREEN_WIDTH*RENDERING_SLICE_HEIGHT);
}