#include <iostream>
#include <cstdlib>

using namespace std;

enum enRockPaperScissors {Rock = 1, Paper = 2, Scissors = 3};
enum enWinTieLose {Win = 1, Tie = 2, Lose = 3};

int ReadNumberBetweenRange(string Message, int From, int To)
{
	int Number;
	do
	{
		cout << Message;
		cin >> Number; cout << endl;
	}while(Number < From || Number > To);

	return Number;
}

enRockPaperScissors ReadComputerChoice()
{
	int ChoiceNumber = rand() % 3 + 1;
	return (enRockPaperScissors) ChoiceNumber;
}

enRockPaperScissors ReadPlayerChoice()
{
	int ChoiceNumber = ReadNumberBetweenRange("Your Choice: [1]:Rock, [2]:Paper, [3]:Scissors ? ", 1, 3);
	return (enRockPaperScissors) ChoiceNumber;
}

enWinTieLose CheckWinOrLose(enRockPaperScissors PlayerChoice, enRockPaperScissors ComputerChoice, 
		int &PlayerWonTimes, int &ComputerWonTimes)
{
	if (PlayerChoice == ComputerChoice)
		return Tie;
	
	else if ( (PlayerChoice == Rock && ComputerChoice == Scissors)
		|| (PlayerChoice == Paper && ComputerChoice == Rock)
		|| (PlayerChoice == Scissors && ComputerChoice == Paper) )
	{
		PlayerWonTimes++;
		return Win;
	}

	else
	{
		ComputerWonTimes++;
		return Lose;
	}
}

string ChoiceToString(enRockPaperScissors Choice)
{
	switch (Choice)
	{
		case Rock:
			return "Rock";
		case Paper:
			return "Paper";
		case Scissors:
			return "Scissors";
	}
}

string GameStateToString(enWinTieLose GameState)
{
	switch (GameState)
	{
		case Win:
			return "[Player1]";
		case Tie:
			return "[No Winner]";
		case Lose:
			return "[Computer]";
	}
}

void ShowRoundResult(enRockPaperScissors PlayerChoice, enRockPaperScissors ComputerChoice, 
		enWinTieLose GameState , int RoundNumber)
{
	cout << "_________________Round [" << RoundNumber << "] __________________\n";
	cout << "\nPlayer1  Choice: " << ChoiceToString(PlayerChoice) << "\n";
	cout << "Computer Choice: " << ChoiceToString(ComputerChoice) << "\n";
	cout << "Round Winner   : " << GameStateToString(GameState) << "\n";
	cout << "_____________________________________________" << endl;

}

void SetScreenColor(enWinTieLose GameState)
{
	switch (GameState)
	{
		case Win:
			system("color 2F");
			break;
		case Tie:
			system("color 6F");
			break;
		case Lose:
			system("color 4F");
			cout << "\a";
			break;
	}
}

void ShowOverGame(int NumberOfRounds, int PlayerWonTimes, int ComputerWonTimes)
{
	cout << "\t\t\t_________________________________________________\n\n";
	cout << "\t\t\t\t    *** G a m e  O v e r ***\n";
	cout << "\t\t\t_________________________________________________\n\n";
	cout << "\t\t\t_______________ [ Game Reuslts ] ________________\n\n";
	cout << "\t\t\tGame Rounds          : " << NumberOfRounds << "\n";
	cout << "\t\t\tPlayer1 Won Times    : " << PlayerWonTimes << "\n";
	cout << "\t\t\tComputer Won Times   : " << ComputerWonTimes << "\n";
	cout << "\t\t\tTie Times            : " << NumberOfRounds - ComputerWonTimes - PlayerWonTimes << "\n";
	cout << "\t\t\tFinal Winner         : ";

	if (ComputerWonTimes > PlayerWonTimes)
		cout << "Computer" << "\n";
	else if (PlayerWonTimes > ComputerWonTimes)
		cout << "Player1" << "\n";
	else
		cout << "No Winner" << "\n";

	cout << "\t\t\t________________________________________________" << endl << endl;
}

bool RequestPlayAgianOrNot()
{
	char YesOrNo;

	do {
		cout << "\t\t\tDo you want to play again? Y/N? ";
		cin >> YesOrNo;
	}while(YesOrNo != 'y' && YesOrNo != 'Y' && YesOrNo != 'n' && YesOrNo != 'N');


	if (YesOrNo == 'y' || YesOrNo == 'Y'){
		system("clear");
		return 1;
	}

	else if(YesOrNo == 'n' || YesOrNo == 'N')
		return 0;

}

void StartGame()
{
	int NumberOfRounds = ReadNumberBetweenRange("How Many Rounds 1 to 10?\n", 1, 10);
	int PlayerWonTimes = 0, ComputerWonTimes = 0;
	for ( int i = 1; i <= NumberOfRounds; i++)
	{
		cout << "Round [" << i << "] begins:\n\n";
		enRockPaperScissors PlayerChoice = ReadPlayerChoice();
		enRockPaperScissors ComputerChoice = ReadComputerChoice();
		enWinTieLose GameState = CheckWinOrLose(PlayerChoice, ComputerChoice, 
				PlayerWonTimes, ComputerWonTimes);
		
		SetScreenColor(GameState);
		ShowRoundResult(PlayerChoice, ComputerChoice, GameState, i);
		cout << "\n\n";

	}

		ShowOverGame(NumberOfRounds, PlayerWonTimes, ComputerWonTimes);
		if (RequestPlayAgianOrNot())
			StartGame();
		else
			exit(0);

}


int main()
{
	StartGame();

	return 0;
}
