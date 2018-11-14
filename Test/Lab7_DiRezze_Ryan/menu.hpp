/*********************************************************************
** Program name: Circular Linked List
** Author: Ryan DiRezze
** Date: November 11, 2018
** Description: Defines function prototypes of functions used in the
   menu.
*********************************************************************/

#ifndef MENU_H
#define MENU_H

#include<fstream>
using std::ifstream;
using std::ofstream;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;

// function prototype for the program's menu
void GameMenu(int&);
void OLD_GameMenu(char&);
void mainMenuReturn(int&);

#endif
