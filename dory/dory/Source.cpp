#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;


//Function Prototype
void Fish(int);
int RandomNumber(int);
void Sleep(int);



int main() {
	while (true) {
		Fish(RandomNumber(16));

		Sleep(500);
	}
		system("PAUSE");
		return 0;
	}

	void Fish(int c) {
		HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(con, c);

		cout << "<>}}}*>  ";	
	}

	int RandomNumber(int range) {
		return (rand() % range);
	}

	void Sleep(int milliSec) {
		clock_t goal = milliSec + clock(); // clock() is system clock
		while (goal > clock()); // acts as sleep function
	}
