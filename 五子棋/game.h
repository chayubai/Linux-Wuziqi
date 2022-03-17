#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//行
#define ROW 20
//列
#define COL 20

//用户1，落的子为1
#define PLAYER1 1
//用户2，落的子为2
#define PLAYER2 2

//游戏结果的四个状态
#define NEXT 0
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 3 //平局

enum Dir
{
	LEFT,
	RIGHT,
	UP,
	DOWN,
	LEFT_UP,
	LEFT_DOWN,
	RIGHT_UP,
	RIGHT_DOWN,
};

void Menu();
void Game();								
