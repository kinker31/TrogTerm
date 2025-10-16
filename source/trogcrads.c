#include "trogcommon.h"

const char *FLAVOR_TEXT[15]
{
	"SIDEWISE: ",
	"MAJESTY: ",
	"CONSUMATE V's: 4",
	"BLOCK: 4",
	"FLIP 'EM DAN: 4",
	"HIDEY HOLE: ",
	"INVISIBILITY: ",
	"SHOT PUT: ",
	"SLANTWISE: ",
	"WRAPAROUND: ",
	"STOP ON TILE: ",
	"VISIT TILE: ",
	"WINGALING: ",
	"TROGBURST: 7 actions points, nothing special needed!",
	"BURN PATH: ",
};

const char KEEPER_TEXT[9]
{
	"HARDYBARDY: Nothin'. But you get a cool bonus at the end.",
	"BROVELADE: Peasants can't un-burninate tiles.",
	"CRANGOLEV: +1 Action points to all your turns!",
	"WORCHEX: Knight can't repair cottages.",
	"STONKLAR: You've got wraparound movement by default.",
	"YUBBITZ: Warp to any nearby tile, card swapping isn't a thing.",
	"HEGELTHA: You can hide on any tile, not just mountains.",
	"CRANJEGG: You can move diagonally by default.",
	"GALGABUDGE: Mountain tiles also count as tunnel tiles.",
};

const char ITEM_TEXT[9]
{
	"DENNIS FLASK: Burn a peasant, he/she counts as healing!\nRecharges when you visit a lake.",
	"POUCH: Change the peasants' direction if you'd like.\nRecharges when you take damage.",
	"FIRE FLING THING: Burn any eligible tile/cottage.\nRecharges when a tile gets repaired.",
	"VOIP RING: Jump to any tile on the board.\nRecharges when you burn a cottage/tile.",
	"TWO GROSS EGGS: +2 Action Points.\nRecharges when you visit a forest.",
	"HEALING: Un-void a peasant and heal for free! Doesn't recharge.",
	"CUMBERDALE SHIELD: Blocks one single knight hit.\nRecharges when you heal.",
	"SUPER TRINKET: Stops Archer-related damage.\nRecharges by visiting him.",
	"ASTRAY BAUBLES: Move a knight to an empty space.\nRecharges by visiting a tunnel.",
};

typedef enum
{
	PLAIN,
	FREE_ADJACENT,
	FREE_DIAGONAL,
	FREE_TILE,
	DIAGONAL,
	BLOCK_ALL,
	BLOCK_KNIGHT,
	BLOCK_ARCHER,
	WRAPAROUND,
	STOP_SPECIAL,
	VISIT_SPECIAL,
	WARP_TO_TILE,
	MOUNTAIN,
	BURN_PATH,
	TROGHAMMER
} ability;

typedef struct {
	unsigned _BitInt(4) flavorRef;
	unsigned _BitInt(4) points;
	ability special;
} trogCrad;

typedef struct {
	unsigned _BitInt(3) pSpawn;
	bool canFix; dir move[5];
} moveCrad;

typedef struct
{
	keeper kp;
	unsigned _BitInt(3) flavorRef;
} keeperCrad;

typedef struct
{
	unsigned _BitInt(3) flavorRef;
	item it; charge ch;
	unsigned _BitInt(2) visitType;
} trogItemCrad;

void InitKeeperDeck(suint size, keeperCrad *d[])
{
	for(suint i = 0; i < size; i++)
	{d[i]->kp = i; d[i]->flavorRef = i;}
}
void InitItemDeck(suint size, trogItemCrad *d[])
{
	for(suint i = 0; i < size; i++)
	{d[]->it = i; d[]->ch = i; d[i]->flavorRef = i;}
}

void PopulateDecks()
{

}
