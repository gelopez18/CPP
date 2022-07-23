#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
	int	pick = 0, total_tries = 0, games = 0, tries = 0;
	int	system_pick = 0;
	char end_game = 'y';
	do
	{
		srand((unsigned)time(0));
		system_pick = 1 + rand() % 50;
		tries = 0;
		games++;
		cout << "I've picked a number between 1 and 50 that has 0 divisor(s)." << endl;
		cout << "Guess the number :" << endl;
		cin >> pick;
		total_tries++;
		tries++;
		while(pick < system_pick || pick > system_pick)
		{
			if (pick < system_pick)
			{
				total_tries++;
				cout << "Too low!" << endl;
				cout << "Try again:" << endl;
				cin >> pick;
				tries++;
			}
			else if(pick > system_pick)
			{
				total_tries++;
				cout << "Too high!" << endl;
				cout << "Try again:" << endl;
				cin >> pick;
				tries++;
			}
		}
		if (pick == system_pick)
		{
			cout << "Your Got it!! It took you " << tries << " tries" << endl;
			cout << "Play again ? [y / n] :" << endl;
			cin >> end_game;
		}

	} while (end_game == 'y' || end_game == 'Y');

	cout << "You averaged "<< total_tries/games <<" trials in " << games << " games." << endl;
	cout << "\nPress any key to continue.";
	_getch();

	return 0;
}
