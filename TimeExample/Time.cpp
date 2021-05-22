#include "stdafx.h"
#include "Time.h"


using namespace std;
//Time constructor initializes each date member to be zero.
//Ensures all Time objects start in a consistent state.
Time::Time()
{
	hour = minute = second = 0;
}

//set new Time value using a 24-hour system
//validate the input and zero if not correct
void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;
	//call the print time method.
	printTime();
}

void Time::tickTime()
{
	if (second >= 60) {
		second = 0;
		minute++;
	}
	if (minute >= 60) {
		minute = 0;
		hour++;
	}
	if (hour >= 24) {
		hour = 0;
	}
}

//print time in 24 hour format (HH:MM:SS)
void Time::printTime()
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}



Time::~Time()
{
}
