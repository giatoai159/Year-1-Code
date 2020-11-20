#include "func.h"

using namespace std;

int main()
{
	srand(time(0));
	string ChuCaiDoan;
	string TuCanDoan;
	string hint;
	int choice;

	do
	{
		cout << "+-----------------+" << endl;
		cout << "|       MENU      |" << endl;
		cout << "|  1. Play Game   |" << endl;
		cout << "|  2. Exit        |" << endl;
		cout << "+-----------------+" << endl;
		cout << "Select: ";
		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				int point = 0;
				char playagain = 'y';
				while (playagain == 'y' || playagain == 'Y')
				{
					TuCanDoan = LoadTuNgauNhien("word.txt", hint);
					ChuCaiDoan.clear();
					int LanThu = 0;
					int win = 0;
					do
					{
						
						GioiThieuGame();
						VeHangman(LanThu);
						InChuCaiConLai(ChuCaiDoan);
						InChu("TYPE YOUR GUESS", true, false);
						win = InChuVaKiemTraWin(TuCanDoan, ChuCaiDoan);

						if (win)
							break;
						char x;
						cout << "The word to guess has " << TuCanDoan.size() << " letters." << endl;
						cout << "Hint: " << hint << endl;
						cout << "Your point right now is " << point << endl;
						cout << "Guess -> "; cin >> x; cout << endl;
						x = toupper(x);
						if (ChuCaiDoan.find(x) == -1)
							ChuCaiDoan += x;

						LanThu = LanThuConLai(TuCanDoan, ChuCaiDoan);
					} while (LanThu < 10);

					if (win)
					{
						InChu("WIN!", true, true);
						point+=TuCanDoan.size();
						cout << "Play again? y/n : ";
						cin >> playagain;

					}
					else
					{
						InChu("LOSE, the word to guess is: ", true, false); InChu(TuCanDoan, false, true);
						point = 0;
						cout << "Play again? y/n : ";
						cin >> playagain;
					}
					if (playagain == 'n' || playagain == 'N')
						break;
				}
			}
			break;
			case 2: cout << "Goodbye." << endl;
			break;
		default: printf("Please type your choice again.\n");
			break;
		}

	} while (choice != 2);
	getchar();
	return 0;
}
