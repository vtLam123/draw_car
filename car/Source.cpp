﻿#include <iostream>
#include "mylib.h"
using namespace std;

void drawCarLeft1(int x, int y) {
	//vẽ nóc (dòng 1)
	gotoXY(x, y);
	cout << "  ______________ ";

	//vẽ (dòng 2)
	gotoXY(x, y+1);
	cout << " /  |__|__|__|__|";

	//vẽ (dòng 3)
	gotoXY(x, y + 2);
	cout << "|"<<char(250)<<"__|           |";

	//vẽ (dòng 4)
	gotoXY(x, y + 3);
	cout << "'-(*)-------(*)-'";
}

void drawCarLeft2(int x, int y) {
	//vẽ nóc (dòng 1)
	gotoXY(x, y);
	cout << "    __           ";

	//vẽ (dòng 2)
	gotoXY(x, y + 1);
	cout << " __/__|_________/";

	//vẽ (dòng 3)
	gotoXY(x, y + 2);
	cout << "/"<<char(250)<<"____|_________|";

	//vẽ (dòng 4)
	gotoXY(x, y + 3);
	cout << "'-(*)-------(*)-'";
}

void drawCarRight1(int x, int y) {
	//vẽ nóc (dòng 1)
	gotoXY(x, y);
	cout << " ______________  ";

	//vẽ (dòng 2)
	gotoXY(x, y + 1);
	cout << "|__|__|__|__|  "<<char(92)<<" ";

	//vẽ (dòng 3)
	gotoXY(x, y + 2);
	cout << "|           |" << "__" << char(250) <<"|" ;

	//vẽ (dòng 4)
	gotoXY(x, y + 3);
	cout << "'-(*)-------(*)-'";
}

void drawCarRight2(int x, int y) {
	//vẽ nóc (dòng 1)
	gotoXY(x, y);
	cout << "           __    ";

	//vẽ (dòng 2)
	gotoXY(x, y + 1);
	cout << char(92) << "_________|__" << char(92) <<"__ ";

	//vẽ (dòng 3)
	gotoXY(x, y + 2);
	cout << "|_________|____" << char(250) << char(92);

	//vẽ (dòng 4)
	gotoXY(x, y + 3);
	cout << "'-(*)-------(*)-'";
}


int main() {
	for (int i = 0; i != 3600; i++)
		cout << "A";
	drawCarLeft1(20, 5);
	drawCarLeft2(20, 10);
	drawCarRight1(20, 15);
	drawCarRight2(20, 20);
	gotoXY(30, 35);
}