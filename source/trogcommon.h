#idndef TROGDOR_COMMON
#define TROGDOR_COMMON

#define suint unsigned short int
#define PREGAME_SIZE 9
#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <time.h>

typedef enum
{
	NORTH,
	SOUTH,
	WEST,
	EAST
} dir;

typedef enum
{
	HARDYBARDY,
	BROVELADE,
	CRANGOLEV,
	WORCHEX,
	STONKLAR,
	YUBBITZ,
	HEGELTHA,
	CRANJEGG,
	GALGABUDGE
} keeper;

typedef enum
{
	DENNIS,
	POUCH,
	FIREFLING,
	VOIP,
	EGGS,
	HEALING,
	SHIELD,
	TRINKET,
	BAUBLES
} item;

typedef enum
{
	VISIT_LAKE,
	TAKE_DAMAGE,
	REPAIR_TILE,
	BURN_TILE,
	VISIT_FOREST,
	NONE_LOL,
	HEAL,
	VISIT_ARCHER,
	VISIT_TUNNEL
} charge;

