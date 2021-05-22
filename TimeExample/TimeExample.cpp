// TimeExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Time t;	//new time object
	cout << "\nThe initial time is ";
	t.printTime();
	t.setTime(13, 10, 15); //set the time
	cout << "\nThe set time is ";

	// Reprinting
	int counter;
	counter = 0;

	while (counter <= 1) {
		t.tickTime();
		t.printTime();
		cout << "\n";
	}

	//t.tickTime();
	//t.printTime();
	//cout << "\n";
	return 0;
}

