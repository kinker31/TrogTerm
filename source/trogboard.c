#include "trogcommon.h"

typedef struct{
	_BitInt(4) terrain;
	_BitInt(3) pState;
	_BitInt(2) kState;
	_BitInt(2) cState;
	_BitInt(2) hState;
	bool archer;
	bool troggy;
	bool burninated;
} tile;

void DrawBaseBoard()
{

}
