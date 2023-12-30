#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_items_rick.h"
#include "bn_sound_items.h"

int main()
{
    bn::core::init();
    bn::regular_bg_ptr bg = bn::regular_bg_items::rick.create_bg(0,0);
    bn::sound_items::song.play();

    while(true)
    {
        bn::core::update();
    }
}
