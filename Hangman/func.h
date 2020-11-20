#ifndef _func_h_
#define _func_h_
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

void InChu(string word, bool invientren, bool invienduoi);
int randomSoChan(int min, int max);
void GioiThieuGame();
void VeHangman(int landoan);
void InChuCai(string chucaidoan, char tu, char den);
void InChuCaiConLai(string chucaidadoan);
int InChuVaKiemTraWin(string TuCanDoan, string ChuCaiDaDoan);
string LoadTuNgauNhien(string duongdan, string &hint);
int LanThuConLai(string TuCanDoan, string ChuCaiDoan);
#endif
