#pragma once
#include<string>
using namespace std;

namespace highscore
{
	const int listLenght = 10;

	struct Score
	{
		string name;
		long int score;
	};

	static Score scoreList[listLenght];

	void InitList(Score scoreList[listLenght]);

	void WriteInPosition(Score scoreList[listLenght], int positionNumber, string newName, long int newScore);

	void DeletePosition(Score scoreList[listLenght], int positionNumber);

	void DeleteAll(Score scoreList[listLenght]);

	void EnterNewScore(Score scoreList[listLenght], string newName, long int newScore);

	Score GetHighestScore(Score scorelist[listLenght]);

	Score GetPositionScore(Score scorelist[listLenght], int position);
}