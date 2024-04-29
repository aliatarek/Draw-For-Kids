#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	DRAW_RECT,		//Draw Rectangle
	EXIT,			//Exit
	TO_DRAW,		//Switch interface to Draw mode
	TO_PLAY,		//Switch interface to Play mode
	EMPTY,			//A click on empty place in the toolbar
	DRAWING_AREA,	//A click on the drawing area
	STATUS,         //A click on the status bar


	///TODO: Add the other action types of the two modes
	SELECT_FIG,
	DRAW_SQUARE,
	DRAW_TRIANGLE,
	DRAW_HEXAGON,
	DRAW_CIRCLE,
	CHANGE_DRAW_COLOUR,
	CHANGE_FILLING_COLOUR,
	BLACK_COLOUR,
	YELLOW_COLOUR,
	ORANGE_COLOUR,
	RED_COLOUR,
	GREEN_COLOUR,
	BLUE_COLOUR,
	DELETE_FIG,
	MOVE,
	UNDO,
	REDO,
	CLEAR,
	RECORD,
	STOP_RECORD,
	PLAY_RECORD,
	SAVE_GRAPH,
    LOAD_GRAPH,
	FIGURE_TYPE,
	FILL_COLOUR,
	TYPE_AND_FILL_COLOUR,
	

};

struct Point	//To be used for figures points
{
	int x, y;
};

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif
