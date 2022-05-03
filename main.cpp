#include "Referee.cpp"
#include "Computer.cpp"
#include "Human.cpp"
int  main()
{
	//Makes human player object with name player1, makes CPU player object
    //with name player2, and referee with name Ref
    HumanPlayer player1;
    ComputerPlayer player2;
    Referee Ref;

    //Calls ref object to ref game, which then in turn calls players to
    //make move, based on their class implementation
    Ref.refGame(player1,player2);

	return 0;
}