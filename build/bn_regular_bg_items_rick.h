#ifndef BN_REGULAR_BG_ITEMS_RICK_H
#define BN_REGULAR_BG_ITEMS_RICK_H

#include "bn_regular_bg_item.h"

//{{BLOCK(rick_bn_gfx)

//======================================================================
//
//	rick_bn_gfx, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 606 tiles (t|f reduced) lz77 compressed
//	+ regular map (flat), lz77 compressed, 32x32 
//	Total size: 512 + 16932 + 1468 = 18912
//
//	Time-stamp: 2023-06-10, 19:20:14
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_RICK_BN_GFX_H
#define GRIT_RICK_BN_GFX_H

#define rick_bn_gfxTilesLen 16932
extern const bn::tile rick_bn_gfxTiles[1212];

#define rick_bn_gfxMapLen 1468
extern const bn::regular_bg_map_cell rick_bn_gfxMap[734];

#define rick_bn_gfxPalLen 512
extern const bn::color rick_bn_gfxPal[256];

#endif // GRIT_RICK_BN_GFX_H

//}}BLOCK(rick_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item rick(
            regular_bg_tiles_item(span<const tile>(rick_bn_gfxTiles, 1212), bpp_mode::BPP_8, compression_type::LZ77), 
            bg_palette_item(span<const color>(rick_bn_gfxPal, 256), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(rick_bn_gfxMap[0], size(32, 32), compression_type::LZ77));
}

#endif

