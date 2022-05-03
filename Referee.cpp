#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.h"
#include <iostream>


Referee::Referee(){}

//This fn calls the other fns
char Referee::refGame(HumanPlayer player1, ComputerPlayer player2)
{

	char humChoice;
	char CPUchoice;
	char const Win= 'W';
	char const Loss= 'L';
	char const Draw= 'T';
	int score=0;

	//human call
	//HumanPlayer player1; hplayer.cpp holds the implementation, which prompts
	//the interface to read in a character representing the move
	std::cout << "Enter move: ";
	humChoice=player1.makeMoveH();
	
	//cpu calls
	//ComputerPlayer player2; cplayer implmentation just throws rock
	CPUchoice=player2.makeMoveC();



	if (humChoice=='R')
	{
		
		return Draw;
	}

	else if (humChoice=='P')
	{
		return Win;
		score++;
	}

	else if (humChoice=='S')
	{
		return Loss;
		score--;
	}

	else
	{
		std::cout << "lost by default, wrong entry";
		return Loss;
	}	
}
