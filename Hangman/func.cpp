#include "func.h"

void InChu(string word, bool invientren = true, bool invienduoi = true)
{
	if (invientren)
	{
		cout << "+------------------------------------------------+" << endl;
		cout << "|";
	}
	else
	{
		cout << "|";
	}
	bool khoangtrangtruoc = true;
	for (int i = word.length(); i < 48; i++)
	{
		if (khoangtrangtruoc)
			word = " " + word;
		else
			word = word + " ";
		khoangtrangtruoc = !khoangtrangtruoc;
	}
	cout << word.c_str();
	if (invienduoi)
	{
		cout << "|" << endl;
		cout << "+------------------------------------------------+" << endl;
	}
	else
		cout << "|" << endl;
}

int randomSoChan(int min, int max)
{
	if (min % 2 == 1)
		min++;
	if (max % 2 == 1)
		max--;
	int random = (rand() % (max + 1 - min) + min) / 2;
	return random * 2;
}

void GioiThieuGame()
{
	InChu("HANGMAN");
	InChu("Huong dan cach choi", false, false);
	InChu("Ban can doan 1 tu tieng anh ngau nhien,", false, false);
	InChu("neu ban doan sai, hangman se duoc ve tu tu va", false, false);
	InChu("qua 10 lan sai ban se thua cuoc.", false, true);
}

void VeHangman(int landoan = 0)
{
	if (landoan >= 1)
		InChu("|", false, false);
	else
		InChu("", false, false);

	if (landoan >= 2)
		InChu("|", false, false);
	else
		InChu("", false, false);

	if (landoan >= 3)
		InChu("O", false, false);
	else
		InChu("", false, false);

	if (landoan == 4)
		InChu("/  ", false, false);
	
	if (landoan == 5)
		InChu("/| ", false, false);

	if (landoan >= 6)
		InChu("/|\\", false, false);
	else
		InChu("", false, false);

	if (landoan >= 7)
		InChu("|", false, false);
	else
		InChu("", false, false);

	if (landoan == 8)
		InChu("/ ", false, false);

	if (landoan >= 9)
		InChu("/ \\", false, false);
	else
		InChu("", false, false);
}
void InChuCai(string chucaidoan, char tu, char den)
{
	string s;
	for (char i = tu; i <= den; i++)
	{
		if (chucaidoan.find(i)==-1)
		{
			s += i;
			s += "  ";
		}
		else
			s += "   ";

	}
	InChu(s, false, false);
}
void InChuCaiConLai(string chucaidadoan)
{
	InChu("AVAILABLE LETTERS");
	InChuCai(chucaidadoan, 'A', 'M');
	InChuCai(chucaidadoan, 'N', 'Z');
}
int InChuVaKiemTraWin(string TuCanDoan, string ChuCaiDaDoan)
{
	int win = 1;
	string s;
	for (int i = 0; i < TuCanDoan.length(); i++)
	{
		if (ChuCaiDaDoan.find(TuCanDoan[i]) == -1)
		{
			win = 0;
			s += "_ ";
		}
		else
		{
			s += TuCanDoan[i];
			s += " ";
		}
	}
	InChu(s, false);
	return win;
}
string LoadTuNgauNhien(string duongdan, string &hint)
{
	string TuDuocLoad;
	vector<string> vt;
	ifstream docfile(duongdan.c_str());
	if (docfile.is_open())
	{
		while (getline(docfile, TuDuocLoad))
			vt.push_back(TuDuocLoad);

		int RandomWord = randomSoChan(0, vt.size());
		int WordHint = RandomWord + 1;
		hint = vt.at(WordHint);
		TuDuocLoad = vt.at(RandomWord);
		docfile.close();
	}
	return TuDuocLoad;
}
int LanThuConLai(string TuCanDoan, string ChuCaiDoan)
{
	int sai = 0;
	for (int i = 0; i < ChuCaiDoan.length(); i++)
	{
		if (TuCanDoan.find(ChuCaiDoan[i]) == string::npos)
			sai++;
	}
	return sai;
}
