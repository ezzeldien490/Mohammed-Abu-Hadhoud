#include <iostream>
#include <cstdlib>

using namespace std;

enum enRockPaperScissors {Rock = 1, Paper = 2, Scissors = 3};
enum enWinTieLose {Win = 1, Tie = 2, Lose = 3};

int ReadPositiveNumber(string Message)
{
	int Number;
	cout << Message;
	cin >> Number; cout << endl;

	return Number;
}

enRockPaperScissors ReadComputerChoice()
{
	int ChoiceNumber = rand() % 3 + 1;
	return (enRockPaperScissors) ChoiceNumber;
}

enRockPaperScissors ReadPlayerChoice()
{
	int ChoiceNumber = ReadPositiveNumber("Your Choice: [1]:Rock, [2]:Paper, [3]:Scissors ? ");
	return (enRockPaperScissors) ChoiceNumber;
}

enWinTieLose CheckWinOrLose(enRockPaperScissors PlayerChoice, enRockPaperScissors ComputerChoice)
{
	if (PlayerChoice == ComputerChoice)
		return Tie;
	
	else if ( (PlayerChoice == Rock && ComputerChoice == Scissors)
		|| (PlayerChoice == Paper && ComputerChoice == Rock)
		|| (PlayerChoice == Scissors && ComputerChoice == Paper) )
		return Win;
	else
		return Lose;
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


void StartGame()
{
	int NumberOfRounds = ReadPositiveNumber("How Many Rounds 1 to 10?\n");

	for ( int i = 1; i <= NumberOfRounds; i++)
	{
		cout << "Round [" << i << "] begins:\n\n";
		enRockPaperScissors PlayerChoice = ReadPlayerChoice();
		enRockPaperScissors ComputerChoice = ReadComputerChoice();
		enWinTieLose GameState = CheckWinOrLose(PlayerChoice, ComputerChoice);
		
		SetScreenColor(GameState);
		ShowRoundResult(PlayerChoice, ComputerChoice, GameState, i);
		cout << "\n\n";
	}
}

int main()
{
	StartGame();

	return 0;
}
