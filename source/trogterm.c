#include "trogcommon.h"
#include "trogcrads.c"
#include "trogboard.c"

typedef enum {
	QUITTING,
	MAIN_MENU,
	OPTIONS,
	GAME_PREP,
	TRODGOR_TURN,
	COUNTRY_TURN,
	TROGHAMMER
} GameState;

void HelpScreen()
{

}

void PreGame(GameState *state)
{
	_BitInt(4) w = 0, h = 0;

}

void GameLoop(GameState *state)
{

}


int main(int argc, char *argv[])
{
	initscr();
	GameState g = MAIN_MENU; char selector = 'a';
	const keeperCrad keepers[PREGAME_SIZE] =
		InitKeeperDeck(PREGAME_SIZE, &keepers);
	const trogItemCrad items[PREGAME_SIZE] =
		InitKeeperDeck(PREGAME_SIZE, &items);
	if(argc < 2)
	{printw("Welcome to Trogdor, The Terminal Game!\n");
		refresh(); sleep(1);}
	while(g > 0)
	{
		prwintw(); refresh; selector = getch();
		switch(selector)
		{
			case 'h': break;
			case 'n': break;
			case 'c': break;
			case 'o': break;
			default:
			printw("Not a valid option, press h for help if needed!\n");
			refresh(); sleep(1); break:
		}
	}
	printw("See you 'round, space Trogdor...\n");
	refresh(); sleep(1);
	endwin();
	return 0;
}
