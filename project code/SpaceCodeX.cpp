#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>    //multi media 
#include <wincon.h>
#include <string>
#include <cmath>
#include <fstream>
#include <conio.h>
#include <amp_graphics.h>
#include <amp.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void setcolor(unsigned short color);

int main()
{
	// Code for setting Dimensions
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the consoles currrent dimensions
	MoveWindow(console, r.left, r.top, 800, 500, TRUE);  // Width = 800, Height = 500
														 // End Code for Dimensions


	setcolor(15);

	for (int i = 0; i<2; i++)
	{

		cout << "                                        * ";
		
		cout << "                                             - ";
		
		cout << "                                                          * ";
		
		cout << "                                       - ";
		
		cout << "                                                * ";
		
		cout << "                                                         - ";
		
		cout << "                                                    * ";
		
		cout << "                                                         - ";
		
		cout << "                                               * ";
		
		cout << "                                                       - ";
		

	}
	setcolor(14);
	cout << endl;
	cout << "----------------------------------------SPACE CODE X-----------------------------------------" << endl;
	setcolor(15);
	for (int i = 0; i<2; i++)
	{

		cout << "                          * ";
		cout << "                                                        - ";
		cout << "                                         * ";
		
		cout << "                                                           - ";
		
		cout << "                                                * ";
		
		cout << "                                                         - ";
		
		cout << "                                                    * ";
		
		cout << "                                                         - ";
		
		cout << "                                               * ";
		
		cout << "                                                       - ";
		
		cout << "                                                                      * ";
		
		cout << "                                       -                           * ";
		
		cout << "                             *                      - ";
		

	}



	_getch();
	system("cls");


	cout << "" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "__,---\"'-._" << endl;
	cout << "___________`----.___________ " << endl;
	cout << "============================/" << endl;
	cout << "----------.---------------'" << endl;
	cout << "` --.__.--'" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "" << endl;

	Sleep(1000);
	system("cls");

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "|                 __,---\"'-._" << endl;
	cout << " ________,------'___________`----.___________ " << endl;
	cout << "\===========================================/" << endl;
	cout << " >--------------.----------.---------------'" << endl;
	cout << "'          ,--'  `--.__.--'" << endl;
	cout << " __________/_" << endl;
	cout << "___________`--." << endl;
	cout << "____________`--." << endl;
	cout << "             |/|" << endl;
	cout << "             |\|" << endl;
	cout << "--._________,-'" << endl;

	Sleep(1000);
	system("cls");
	cout << "	                             _______" << endl;
cout << " ___.--------._____________,------' -----.`----._" << endl;
cout << " \                           `  -  .  _         /\ " << endl;
cout <<"  `.__________                           `  -  |  |                 __,---\"'-._" << endl;
cout << "              `-----------.______             ,'_/  ________,------'___________`----.___________ " << endl;
cout << "                                 `-----.____,'      \===========================================/" << endl;
cout << "                                       |   :|        >--------------.----------.---------------'" << endl;
cout << "                                      /   :|   _,--'          ,--'  `--.__.--'" << endl;
cout << "                                      /   : |--'______________/_" << endl;
cout << "                               ,---,'    :  \__________________`--." << endl;
cout << "                                ,---,'    :  \__________________`--." << endl;
cout << "                               `__________                        |/|" << endl;
cout << "                                          `------._               |\|" << endl;
cout << "                                                    `--._________,-'" << endl;


Sleep(1000);
system("cls");
cout << "	                             _______                    ^(" << endl;
cout << " ___.--------._____________,------'       .`----._           .         ^'^      ^." << endl;
cout << " \                           `  -  .  _              " << endl;
cout << "  `.__________                           `  -      .'.'               __,---    ._" << endl;
cout << "              `-----------.__   __             ,'_/  ________,------'___     _`----.___________ " << endl;
cout << "                                 `        -.    _,'      \========      =============================/" << endl;
cout << "                        .-.            |             >--------------.-              -.---------------'" << endl;
cout << "                    .:.          ''    /   :|   _,--'          ,--'  `--.__.--'" << endl;
cout << "              ' - /           ';['       /      -'_____    _______/_" << endl;
cout << "                               ,---,'    :  \____    __________`--." << endl;
cout << "                                ,---,'    :  \_      ___________`--." << endl;
cout << "                               `__________                        |/|" << endl;
cout << "                                          `--    -._               |\|" << endl;
cout << "                                                    `--._________,-'" << endl;


setcolor(10);
cout << " Aaaaaahh\n\n";

Sleep(1500);


setcolor(12);
cout << " The Engine Malfunctioned ...\n";
Sleep(1500);

setcolor(12);

cout << " Emergency Protocal in effect now\n";
Sleep(1500);
cout << " All Gates locked" << endl;
Sleep(1500);
cout << " Proceed to Escape Pods...\n" << endl;
Sleep(2000);


setcolor(10);
cout << " Oh no, the ship is damaged...\n";
Sleep(1500);
cout << " I need to get to the escape pods at the farside of the ship\n";
Sleep(2000);
cout << " NOO, I am trapped on the other side of the ship\n";
Sleep(2000);
cout << " I have to somehow open all the sealed gates to get to the pods\n";
Sleep(2000);
cout << " but how...I am alone...\n\n";
Sleep(2500);

setcolor(7);
cout << " You can open the gate manually\n\n";
Sleep(1500);
setcolor(10);
cout << " Who's there...";
Sleep(1500);
cout << " Show yourself\n\n";

setcolor(7);
cout << " It is I, the SPACE WIZARD\n\n";
Sleep(1500);

setcolor(10);
cout << " You do exist..";
Sleep(1500);
cout << " Show me the way..\n\n";

setcolor(7);
cout << " You must use the Codex to override the gates\n\n";
Sleep(1500);

setcolor(10);
cout << " I don't know the powers of the Codex\n\n";
Sleep(1500);

setcolor(7);
cout << " Then... I will show you the way\n\n";
Sleep(1500);
system("cls");

setcolor(15);
cout << " - Gate 1 - \n\n";
setcolor(7);
cout << " To use the power of Codex, you need some of my abilities\n";
Sleep(1500);
cout << " I will give you the power of";
Sleep(1500);
setcolor(9);
cout << " directives\n";
Sleep(1500);
setcolor(14);
cout << " #include <iostream> ";
setcolor(7);
cout << "will allow you to perform input and output spells\n\n";

setcolor(10);
cout << " Alright Wizard - I'm at the door\n";
Sleep(1500);


cout << "  ________________\n";
cout << " |                |\n";
cout << " |================|\n";
cout << " |                |\n";
cout << " |================|\n";
cout << " |                |\n";
cout << " |           o    |\n";
cout << " |         o o o  |\n";
cout << " |           o    |\n";
cout << " |                |\n";
cout << " |                |\n";
cout << " |                |\n";
cout << " |________________|\n\n";

Sleep(2500);

cout << " There is a keypad... how do I turn it on?\n";
Sleep(1500);

setcolor(7);
cout << " To enable and ";
setcolor(9);
cout << " initiate ";
setcolor(7);
cout << " the keypad, use ";
setcolor(14);
cout << "int main ()\n";
setcolor(7);
cout << " this is where you dictate your spells\n\n";
Sleep(1500);

setcolor(7);
cout << " To make your first Codex spell\n";
cout << " Type ";
setcolor(14);
cout << " #include <iostream> ";
setcolor(7);
cout << "and  ";
setcolor(14);
cout << "int main ()\n";
Sleep(1500);

string ut = " Spell: \n ";
string firstinput;

bool done = true;

do {//Begin of do statement

	setcolor(11);
	cout << ut;
	try {
		setcolor(15);
		getline(cin, firstinput);

		if (firstinput != "#include <iostream> int main ()")
			throw 99;
		if (firstinput == "#include <iostream> int main ()")
			done = true;
		cout << endl;
	} //End of Try 

	catch (int x)
	{
		cout << endl;
		setcolor(12);
		cout << "\"" << firstinput << "\"" << " is not a recognized. Check your spell again.\n\n";
		cin.clear();
		done = false;

	}
} while (done == false); //End do while loop

Sleep(1500);

setcolor(10);
cout << " Well Done! \n";
Sleep(1500);

setcolor(7);
cout << " Now you have enabled the keypad\n";
cout << " Type ";
setcolor(14);
cout << " cout << \"Unlock\"; " ;
setcolor(7);
cout << "to communincate with the keypad and unlock the door \n";

do {//Begin of do statement

	setcolor(11);
	cout << ut;
	try {
		setcolor(15);
		getline(cin, firstinput);

		if (firstinput != "cout << \"Unlock\";")
			throw 99;
		if (firstinput == "cout << \"Unlock\";")
			done = true;
		cout << endl;
	} //End of Try 

	catch (int x)
	{
		cout << endl;
		setcolor(12);
		cout << "\"" << firstinput << "\"" << " is not a recognized. Check your spell again.\n\n";
		cin.clear();
		done = false;

	}
} while (done == false); //End do while loop

Sleep(1500);

setcolor(10);
cout << " Great Work... You have escaped the first gate\n\n";
_getch();
    return 0;
}

void setcolor(unsigned short color)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);   // Stores Color Settings for Text, h is just the name of the Handle, could be anything though; 
												  //a different way is system("color xy);

	SetConsoleTextAttribute(h, color); // Better method for coloring text, Numbers give different color options

									   //SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); // Changes Color of Text
}
