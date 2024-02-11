// score_rater_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// int refers to an integer, which in this case is score.
	int score; 
	//cout, is the console saying to output the text
	cout << "Enter your score";
	//with cin, the user inputes their score
	cin >> score; 
	//If the score is 1000 or more, then it inputs the below message
	if (score >= 1000)
	{
		cout <<"You scored 1000 or more. GG! \n";
	}
	//Else if means that if there is 500 or more, but less than 1000, it inputs that message below
	else if (score >= 500)
	{
		cout << "You scored 500 or more. Noice. \n";
	}
	else if (score >= 250)
	{
		cout << "You scored 250 or more. Meh, it's alright.\n";
	}
	else
	{
		cout << "You scored less than 250. Git Good.\n";
	}
	//Return means that it returns the error code of 0
	return 0;
}

