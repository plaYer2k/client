#include "cbase.h"

// memdbgon must be the last include file in a .cpp file!!!
#include <tier0/memdbgon.h>

static Color getColorPerIndex(int player_index)
{
	switch(player_index)
	{
		case 1:
			return Color( 225, 60, 60, 255 );	//red
			break;
		case 2:
			return Color( 200, 200, 60, 255 );	//yellow
			break;
		case 3:
			return Color( 60, 225, 60, 255 );	//green
			break;
		case 4:
			return Color( 30, 90, 225, 255 );	//blue
			break;
		case 5:
			return Color( 225, 30, 190, 255 );	//pink
			break;
		case 6:
			return Color( 30, 225, 225, 255 );	//cyan
			break;
		case 7:
			return Color( 255, 255, 255, 255 );	//white
			break;
		default:
			return Color( 255, 150, 0, 255 );	//orange
			break;
	}
}

#define STATS_MAX_PLAYER_OVERRIDE 5