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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(6, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(4, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_WF, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_WF, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 98, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS, 1, 114, WARP_NO_CHECKPOINT),
		WARP_NODE(14, LEVEL_BOB, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_BOB, 1, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_BOB, 1, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_BOB, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_WF, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT(140, -4874, -1314, 3432, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(129, -298, -1314, -5342, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -298, -1114, -5342, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(130, 7293, -1345, 976, 0, 0, 0, 0x0, bhvBreakableBoxSmall),
		OBJECT(0, -2602, 3587, 5545, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 248, -1345, -4741, 0, 45, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6834, 648, -750, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 3993, -1345, 2594, 0, 110, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4703, -3071, 6148, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1679, -1314, 2785, 0, 74, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1419, -1801, -3790, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(137, 2527, 2343, -3, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -677, 2372, 4716, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT_WITH_ACTS(137, 6164, 573, -6055, 0, 0, 0, 0x50000, bhvExclamationBox, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(0, 583, 2683, -5387, 0, -154, 0, 0xb0000, bhvFadingWarp),
		OBJECT(0, 1680, 3835, -5523, 0, -153, 0, 0xc0000, bhvFadingWarp),
		OBJECT(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000, bhvFadingWarp),
		OBJECT(0, 1980, 768, 6618, 0, -151, 0, 0xe0000, bhvFadingWarp),
		OBJECT(100, 469, -1345, 3556, 0, 0, 0, 0x0, bhvFirePiranhaPlant),
		OBJECT(100, 2962, 1737, -1538, 0, 0, 0, 0x0, bhvFirePiranhaPlant),
		OBJECT_WITH_ACTS(180, 5800, 295, -4238, 0, 0, 0, 0x0, bhvFireSpitter, ACT_1),
		OBJECT_WITH_ACTS(180, 4886, 295, -5734, 0, 0, 0, 0x0, bhvFireSpitter, ACT_1),
		OBJECT_WITH_ACTS(180, 7046, 295, -5668, 0, 0, 0, 0x0, bhvFireSpitter, ACT_1),
		OBJECT(207, -1409, 2038, 4679, 0, 90, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(0, -4013, -1314, -3142, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 484, -1314, 2512, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, -3652, -1314, 2814, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2720, -1314, 2280, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1729, -1139, 940, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -2083, 2215, 4680, 0, -10, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2467, 2636, 4630, 0, -10, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2759, 3049, 4562, 0, -10, 0, 0x0, bhvHiddenObject),
		OBJECT(0, 755, -928, -4120, 0, 0, 0, 0x3000000, bhvHiddenRedCoinStar),
		OBJECT(194, 6693, -3064, 2924, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, 6658, -3064, 1257, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(124, 2886, -1314, 5074, 0, -180, 0, 0x200000, bhvMessagePanel),
		OBJECT(116, 3951, 1315, -3137, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(100, 1999, -1345, 4955, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -4695, -1345, 2487, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, 5860, -1314, 1449, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(215, -2212, 1011, -1854, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6834, 596, -750, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2902, -1314, 6915, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1183, -1314, 1412, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1777, -1853, 2760, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6620, -1314, 3058, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2460, -1314, -5564, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -298, -1314, -5342, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(103, -4766, -1314, -127, 0, 0, 0, 0x0, bhvSmallWhomp),
		OBJECT(103, 5973, -1314, -484, 0, 0, 0, 0x0, bhvSmallWhomp),
		OBJECT(103, 1592, -1314, 2871, 0, 80, 0, 0x0, bhvSmallWhomp),
		OBJECT(0, -3522, -775, -4428, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -2200, 157, -675, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -3546, 4010, 5164, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT(122, 6814, 3334, 1816, 0, 0, 0, 0x4000000, bhvStar),
		OBJECT(122, 6562, -2702, -3099, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(23, -4736, -1314, -1970, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -3656, -1314, 1339, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 5059, -1314, -2335, 0, 0, 0, 0x0, bhvTree),
		OBJECT_WITH_ACTS(22, -5172, -1324, -2460, 0, 0, 0, 0x140000, bhvWarpPipe, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(22, 5049, 280, -5848, 0, 0, 0, 0x1e0000, bhvWarpPipe, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(103, 5504, 295, -5047, 0, 0, 0, 0x0, bhvWhompKingBoss, ACT_1),
		OBJECT(107, 7279, -1345, 252, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(116, -2199, -726, -1665, 0, 0, 0, 0x0, bhvYellowCoin),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 24),
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
