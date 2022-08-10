// Tick Tack Toe Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
const int rsize = 3;
const int csize = 3;
void print(char[][csize], int , int);

int main()
{
	char tickgame[][3] = { { '_','_','_' }, { '_','_','_' }, { '_','_','_' } };
	print(tickgame, csize, rsize);
	cout << "X symbol is for Player 1" << endl;
	cout << "O symbol is for Player 2" << endl;
	int ri, ci;
	int tie = 0;
	int sel = 0;
	while (tie<=9)
	{
		cout << "***** Player 1 Turn *****" << endl;
		cout << "Enter Row Index : ";
		cin >> ri;
		while (ri < 0 || ri>2)
		{
			cout << "***** The Index should be between 0-2 *****" << endl;
			cout << "Enter Row Index again  : ";
			cin >> ri;
		}
		cout << "Enter Column Index : ";
		cin >> ci;
		while (ci < 0 || ci>2)
		{
			cout << "***** The Index should be between 0-2 *****" << endl;
			cout << "Enter Column Index again  : ";
			cin >> ci;
		}
		while (tickgame[ri][ci] == 'X' || tickgame[ri][ci] == 'O')
		{
			cout << "*****  You can not insert the space is already filled *****" << endl;
			cout << "Enter Row Index again : ";
			cin >> ri;
			while (ri < 0 || ri>2)
			{
				cout << "***** The Index should be between 0-2 *****" << endl;
				cout << "Enter Row Index again  : ";
				cin >> ri;
			}
			cout << "Enter Column Index again  : ";
			cin >> ci;
			while (ci < 0 || ci>2)
			{
				cout << "***** The Index should be between 0-2 *****" << endl;
				cout << "Enter Column Index again  : ";
				cin >> ci;
			}
		}
		tickgame[ri][ci] = 'X';
		print(tickgame, csize, rsize);
		tie++;
		if (tickgame[0][0] == 'X'&& tickgame[1][1] == 'X' && tickgame[2][2] == 'X')
		{
			cout << "***** Player 1 Wins *****";
			break;
		}
		if (tickgame[2][0] == 'X'&& tickgame[1][1] == 'X' && tickgame[0][2] == 'X')
		{
			cout << "***** Player 1 Wins *****";
			break;
		}
		int x=0;
		for(int i=0;i<rsize;i++)
		{
			if (tickgame[i][0] == 'X' && tickgame[i][1] == 'X' && tickgame[i][2]=='X')
			{
				cout << "***** Player 1 Wins *****";
				x = 1;
				break;
			}
		}
		if (x==1)
		{
			break;
		}
		int y = 0;
		for (int i = 0; i < csize; i++)
		{
			if (tickgame[0][i] == 'X' && tickgame[1][i] == 'X' && tickgame[2][i] == 'X')
			{
				cout << "***** Player 1 Wins *****";
				y = 1;
				break;
			}
		}
		if (y == 1)
		{
			break;
		}
		if (tie==9)
		{
			cout << "***** Match Draw *****";
			break;
		}
        cout << "***** Player 2 Turn *****" << endl;
		cout << "Enter Row Index : ";
		cin >> ri;
		while (ri < 0 || ri>2)
		{
			cout << "***** The Index should be between 0-2 *****" << endl;
			cout << "Enter Row Index again  : ";
			cin >> ri;
		}
		cout << "Enter Column Index : ";
		cin >> ci;
		while (tickgame[ri][ci] == 'X' || tickgame[ri][ci] == 'O')
		{
			cout << "*****  You can not insert the space is already filled *****" << endl;
			cout << "Enter Row Index again : ";
			cin >> ri;
			while (ri < 0 || ri>2)
			{
				cout << "***** The Index should be between 0-2 *****" << endl;
				cout << "Enter Row Index again  : ";
				cin >> ri;
			}
			cout << "Enter Column Index again  : ";
			cin >> ci;
			while (ci < 0 || ci>2)
			{
				cout << "***** The Index should be between 0-2 *****" << endl;
				cout << "Enter Column Index again  : ";
				cin >> ci;
			}
		}
		tickgame[ri][ci] = 'O';
		print(tickgame, csize, rsize);
		tie++;
		if(tickgame[0][0]=='O'&& tickgame[1][1] == 'O' && tickgame[2][2] == 'O')
		{
			cout << "***** Player 2  Wins *****";
			break;
		}
		if (tickgame[02][0] == 'O'&& tickgame[1][1] == 'O' && tickgame[0][2] == 'O')
		{
			cout << "***** Player 2  Wins *****";
			break;
		}
		int z = 0;
		for (int i = 0; i < rsize; i++)
		{
			if (tickgame[i][0] == 'O' && tickgame[i][1] == 'O' && tickgame[i][2] == 'O')
			{
				cout << "***** Player 2  Wins *****";
				z = 1;
				break;
			}
		}
		if (z == 1)
		{
			break;
		}
		int u = 0;
		for (int i = 0; i < csize; i++)
		{
			if (tickgame[0][i] == 'O' && tickgame[1][i] == 'O' && tickgame[2][i] == 'O')
			{
				cout << "***** Player 2 Wins *****";
				u = 1;
				break;
			}
		}
		if (u == 1)
		{
			break;
		}
		
	}
	cout << endl;
	cout << "The Game is Over";
}
void print(char arr[][csize], int rn, int cn)
{
	for (int i = 0; i < rn; i++)
	{
		for (int index = 0; index < cn; index++)
		{
			cout << arr[i][index]<<" ";

		}
		cout << endl;
	}
	cout << endl;
}
