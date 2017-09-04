#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	int num, numrand; //integer variables
	char yn; //characters yes or no
	string name;
	srand(time(NULL)); //uses time to make a random seed
	
	cout << "Welcome and please enter your name: "; cin >> name;
	cout << "Hello " << name << " do you want to play a game? (y/n): "; cin >> yn;


	while (true)
	{
		if (yn == 'n' || yn == 'N')
			return 0;
		if (yn == 'y' || yn == 'Y')
			break;
	}


	while (true)
	{
		cout << "computer will imagine a number from 0 to 5 and you should guess it: ";
		cin >> num;
		numrand = rand() % 6; //generate number from 0 to 5
		if (numrand == num)
			cout << "you win" << endl;
		else if (num == -1)
			break; //ends the program
		else
			cout << "you lose! The computer imagined number " << numrand << endl;
	}

	
	system("pause");
	return (0);
}