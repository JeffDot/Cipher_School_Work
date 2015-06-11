#include "CTR.h"
#include <iostream>

using namespace std;

int GetInitCtr() {
	srand(time(0));
	return rand() % MAX_CTR;
}

BinaryString GetTi(int iniCtr ,int i) {
	BinaryString res = "";
	BinaryString restmp = IntToBinaryString(iniCtr + i, MAX_BIN_SIZE);//32bit
	res = restmp.substr(ARRAY_SIZE, MAX_BIN_SIZE - ARRAY_SIZE);
	return res;
}
