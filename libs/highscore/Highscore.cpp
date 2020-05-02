#include"Highscore.h"


namespace highscore
{
	bool init = false;

	static void OrderList(Score scoreList[listLenght])
	{
		int aux = 0;
		string auxName = "Empty";

		for (int i = 0; i < listLenght; i++)
		{
			for (int j = 0; j < listLenght; j++)
			{
				if (scoreList[i].score != scoreList[j].score)
				{
					if (scoreList[i].score > scoreList[j].score)
					{
						aux = scoreList[j].score;
						auxName = scoreList[j].name;

						scoreList[j].score = scoreList[i].score;
						scoreList[j].name = scoreList[i].name;

						scoreList[i].score = aux;
						scoreList[i].name = auxName;
					}

				}
			}
		}
	}

	void InitList(Score scoreList[listLenght])
	{
		for (int i = 0; i < listLenght; i++)
		{
			scoreList[i].name = "Empty";
			scoreList[i].score = 0;
		}

		init = true;
	}

	void WriteInPosition(Score scoreList[listLenght], int positionNumber, string newName, long int newScore)
	{
		if (init == true)
		{
			if (positionNumber >= 0 && positionNumber <= listLenght)
			{
				scoreList[positionNumber].name = newName;
				scoreList[positionNumber].score = newScore;

				OrderList(scoreList);
			}
		}
	}

	void DeletePosition(Score scoreList[listLenght], int positionNumber)
	{
		if (init == true)
		{
			if (positionNumber >= 0 && positionNumber <= listLenght)
			{			
				scoreList[positionNumber].score = 0;
				scoreList[positionNumber].name = "Empty";

				OrderList(scoreList);
			}
		}
	}

	void DeleteAll(Score scoreList[listLenght])
	{
		if (init == true)
		{
			for (int i = 0; i < listLenght; i++)
			{
				scoreList[i].name = "Empty";
				scoreList[i].score = 0;
			}
		}
	}

	void EnterNewScore(Score scoreList[listLenght], string newName, long int newScore)
	{
		if (init == true)
		{
			bool write = false;

			for (int i = 0; i < listLenght; i++)
			{
				if (scoreList[i].name == "Empty" && scoreList[i].score == 0)
				{
					scoreList[i].name = newName;
					scoreList[i].score = newScore;
					i = listLenght;
					write = true;
				}

			}

			if (write == false)
			{
				scoreList[listLenght - 1].name = newName;
				scoreList[listLenght - 1].score = newScore;
			}
			OrderList(scoreList);
		}
	}

	Score GetHighestScore(Score scorelist[listLenght])
	{
		if (init == true)
		{
			return scorelist[0];
		}

	}

	Score GetPositionScore(Score scorelist[listLenght], int positionNumber)
	{
		if (init == true)
		{
			if (positionNumber >= 0 && positionNumber <= listLenght)
			{
				return scoreList[positionNumber];
			}
		}
	}
}