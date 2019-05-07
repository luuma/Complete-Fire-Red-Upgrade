#pragma once

#include "moves.h"

#define ITEM_TM01_FOCUS_PUNCH 289
#define ITEM_TM02_DRAGON_CLAW 290
#define ITEM_TM03_WATER_PULSE 291
#define ITEM_TM04_CALM_MIND 292
#define ITEM_TM05_ROAR 293
#define ITEM_TM06_TOXIC 294
#define ITEM_TM07_HAIL 295
#define ITEM_TM08_BULK_UP 296
#define ITEM_TM09_BULLET_SEED 297
#define ITEM_TM10_HIDDEN_POWER 298
#define ITEM_TM11_SUNNY_DAY 299
#define ITEM_TM12_TAUNT 300
#define ITEM_TM13_ICE_BEAM 301
#define ITEM_TM14_BLIZZARD 302
#define ITEM_TM15_HYPER_BEAM 303
#define ITEM_TM16_LIGHT_SCREEN 304
#define ITEM_TM17_PROTECT 305
#define ITEM_TM18_RAIN_DANCE 306
#define ITEM_TM19_GIGA_DRAIN 307
#define ITEM_TM20_SAFEGUARD 308
#define ITEM_TM21_FRUSTRATION 309
#define ITEM_TM22_SOLARBEAM 310
#define ITEM_TM23_IRON_TAIL 311
#define ITEM_TM24_THUNDERBOLT 312
#define ITEM_TM25_THUNDER 313
#define ITEM_TM26_EARTHQUAKE 314
#define ITEM_TM27_RETURN 315
#define ITEM_TM28_DIG 316
#define ITEM_TM29_PSYCHIC 317
#define ITEM_TM30_SHADOW_BALL 318
#define ITEM_TM31_BRICK_BREAK 319
#define ITEM_TM32_DOUBLE_TEAM 320
#define ITEM_TM33_REFLECT 321
#define ITEM_TM34_SHOCK_WAVE 322
#define ITEM_TM35_FLAMETHROWER 323
#define ITEM_TM36_SLUDGE_BOMB 324
#define ITEM_TM37_SANDSTORM 325
#define ITEM_TM38_FIRE_BLAST 326
#define ITEM_TM39_ROCK_TOMB 327
#define ITEM_TM40_AERIAL_ACE 328
#define ITEM_TM41_TORMENT 329
#define ITEM_TM42_FACADE 330
#define ITEM_TM43_SECRET_POWER 331
#define ITEM_TM44_REST 332
#define ITEM_TM45_ATTRACT 333
#define ITEM_TM46_THIEF 334
#define ITEM_TM47_STEEL_WING 335
#define ITEM_TM48_SKILL_SWAP 336
#define ITEM_TM49_SNATCH 337
#define ITEM_TM50_OVERHEAT 338
#define ITEM_HM01_CUT 339
#define ITEM_HM02_FLY 340
#define ITEM_HM03_SURF 341
#define ITEM_HM04_STRENGTH 342
#define ITEM_HM05_FLASH 343
#define ITEM_HM06_ROCK_SMASH 344
#define ITEM_HM07_WATERFALL 345
#define ITEM_HM08_DIVE 346

const u16 gTMHMMoves[NUM_TMSHMS] = {
	MOVE_FOCUSPUNCH,
	MOVE_DRAGONCLAW,
	MOVE_WATERPULSE,
	MOVE_CALMMIND,
	MOVE_ROAR,
	MOVE_TOXIC,
	MOVE_HAIL,
	MOVE_BULKUP,
	MOVE_BULLETSEED,
	MOVE_HIDDENPOWER,
	MOVE_SUNNYDAY,
	MOVE_TAUNT,
	MOVE_ICEBEAM,
	MOVE_BLIZZARD,
	MOVE_HYPERBEAM,
	MOVE_LIGHTSCREEN,
	MOVE_PROTECT,
	MOVE_RAINDANCE,
	MOVE_GIGADRAIN,
	MOVE_SAFEGUARD,
	MOVE_FRUSTRATION,
	MOVE_SOLARBEAM,
	MOVE_IRONTAIL,
	MOVE_THUNDERBOLT,
	MOVE_THUNDER,
	MOVE_EARTHQUAKE,
	MOVE_RETURN,
	MOVE_DIG,
	MOVE_PSYCHIC,
	MOVE_SHADOWBALL,
	MOVE_BRICKBREAK,
	MOVE_DOUBLETEAM,
	MOVE_REFLECT,
	MOVE_SHOCKWAVE,
	MOVE_FLAMETHROWER,
	MOVE_SLUDGEBOMB,
	MOVE_SANDSTORM,
	MOVE_FIREBLAST,
	MOVE_ROCKTOMB,
	MOVE_AERIALACE,
	MOVE_TORMENT,
	MOVE_FACADE,
	MOVE_SECRETPOWER,
	MOVE_REST,
	MOVE_ATTRACT,
	MOVE_THIEF,
	MOVE_STEELWING,
	MOVE_SKILLSWAP,
	MOVE_SNATCH,
	MOVE_OVERHEAT,	//TM50
	MOVE_POISONPOWDER, //TM51
	MOVE_CUT,		//HM01
	MOVE_FLY,
	MOVE_SURF,
	MOVE_STRENGTH,
	MOVE_FLASH,
	MOVE_FLAMETHROWER,
	MOVE_WATERFALL,
	MOVE_DIVE,
	MOVE_REVERSAL,	//HM09
	MOVE_REVENGE,
};
