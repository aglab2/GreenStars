#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(6, LEVEL_TTC, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_TTM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(4, LEVEL_RR, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_THI, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_WDW, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 1, 241, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 240, WARP_NO_CHECKPOINT),
		WARP_NODE(14, LEVEL_CASTLE, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_CASTLE, 1, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_CASTLE, 1, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CASTLE, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_CASTLE_COURTYARD, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(117, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(116, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(115, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(114, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(113, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(112, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(101, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(99, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(98, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(97, LEVEL_BOB, 0, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(96, LEVEL_BOB, 0, 96, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_WMOTR, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(212, 4172, 1650, 30, 0, 90, 0, 0x0, bhv1Up),
		OBJECT(0, 781, -1190, 4026, -1, -15, 0, 0x600000, bhvAirborneStarCollectWarp),
		OBJECT(0, 37, -1615, -4164, 0, -180, 0, 0x610000, bhvAirborneStarCollectWarp),
		OBJECT(0, 217, 1823, 2647, 0, 45, 0, 0x620000, bhvAirborneStarCollectWarp),
		OBJECT(0, -4667, 1458, 1590, 0, -90, 0, 0x630000, bhvAirborneStarCollectWarp),
		OBJECT(0, -347, 1875, -2028, 0, 135, 0, 0x640000, bhvAirborneStarCollectWarp),
		OBJECT(0, 2422, 1771, 22, 0, 90, 0, 0x650000, bhvAirborneStarCollectWarp),
		OBJECT(128, -74, 1667, -2310, 0, -45, 0, 0x2d0000, bhvCannon),
		OBJECT(0, 781, -1190, 4026, -1, -15, 0, 0x700000, bhvDeathWarp),
		OBJECT(0, 37, -1615, -4164, 0, -180, 0, 0x710000, bhvDeathWarp),
		OBJECT(0, 217, 1823, 2647, 0, 45, 0, 0x720000, bhvDeathWarp),
		OBJECT(0, -4667, 1458, 1590, 0, -90, 0, 0x730000, bhvDeathWarp),
		OBJECT(0, -347, 1875, -2028, 0, 135, 0, 0x740000, bhvDeathWarp),
		OBJECT(0, 2422, 1771, 22, 0, 90, 0, 0x750000, bhvDeathWarp),
		OBJECT(29, -763, 1555, 1670, 0, -135, 0, 0x0, bhvDoor),
		OBJECT(34, -51, 1556, -70+32, 0, -90, 0, 0x50000000, bhvStarDoor),
		OBJECT(35, 600, -1845, 2275, 0, -180, 0, 0x32000000, bhvDoor),
		OBJECT(36, -761, 1556, -1601, 0, -45, 0, 0x41000000, bhvDoor),
		OBJECT(28, -6212, 1262, -45, 0, -90, 0, 0x140000, bhvDoorWarp),
		OBJECT(28, -6212, 1262, 106, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000, bhvFadingWarp),
		OBJECT(0, 1980, 768, 6618, 0, -151, 0, 0xe0000, bhvFadingWarp),
		OBJECT(0, -2432, 1642, 27, 0, 90, 0, 0xf10000, bhvPaintingDeathWarp),
		OBJECT(0, -2432, 1642, 27, 0, 90, 0, 0xf00000, bhvPaintingStarCollectWarp),
		OBJECT(0, 590, -208, 840, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(0, 1769, -1890, 490, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(0, -587, -1846, -429, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(0, -594, -1846, 485, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(0, 1773, -1846, -435, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(120, 600, -1794, 20, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, -5300, 1261, 27, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(221, 595, 313, 2060, 0, -180, 0, 0x4c000000, bhvToadMessage),
		OBJECT(221, -1537, 1555, 2250, 0, -180, 0, 0x46000000, bhvToadMessage),
		OBJECT(221, 3006, 1555, 277, 0, -106, 0, 0x47000000, bhvToadMessage),
		OBJECT(221, 776, -1846, -4652, 0, 0, 0, 0x48000000, bhvToadMessage),
		OBJECT(221, -4265, 1261, 487, 0, -180, 0, 0x49000000, bhvToadMessage),
		OBJECT(0, 485, 1887, 2910, 0, 45, 0, 0x60000, bhvWarp),
		OBJECT(0, 65, 2598, -2430, 0, 45, 0, 0x40000, bhvWarp),
		OBJECT(22, -5020, 1262, -1540, 0, 90, 0, 0xc0000, bhvWarpPipe),
		OBJECT(22, -2080, -1845, 20, 0, 90, 0, 0xb0000, bhvWarpPipe),
		OBJECT(22, 3270, 1626, 30, 0, 0, 0, 0x10000, bhvWarpPipe),
		OBJECT(22, -5020, 1262, 1600, 0, 0, 0, 0x20000, bhvWarpPipe),
		OBJECT(22, 48, -1845, -4509, 0, 0, 0, 0x30000, bhvWarpPipe),
		OBJECT(22, 585, -1406, 4282, 0, 0, 0, 0x50000, bhvWarpPipe),
		OBJECT(116, -1515, 1261, 917, 0, 0, 0, 0x0, bhvYellowCoin),
		OBJECT(116, -1515, 1261, -871, 0, 0, 0, 0x0, bhvYellowCoin),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 45),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
