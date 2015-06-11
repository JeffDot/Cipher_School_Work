#include "FileToBinaryString.h"
#include <string>
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

BinaryString FileToBinaryString(string filename ,bool isBinaryFile) {
	srand(time(0));
	ifstream infile;
	infile.open(filename);
	if (!infile){
		cout << "FILE UN EXIST!\n";
		infile.close();
		exit(1);
	}

	char filebuff[FILE_SIZE];
	int count = 0;
	infile >> filebuff;
	BinaryString tmp = "";
	count = 0;
	while (filebuff[count] != '\0') {
		tmp += filebuff[count];
		count += 1;
	}
	if (tmp.size() % 2){
		tmp += "=";
	}
	BinaryString res = "";
	if (isBinaryFile) {
		int modTmp = tmp.size() % 16;//should be 16 or it cant work in next step
		if (!modTmp) {
			res = tmp;
		}
		else {
			count = 0;
			res = tmp;
			for (; count < 16 - modTmp;count++) {
				res += rand()%2 + '0';
			}
		}
	}
	else {
		for (count = 0; count < tmp.size(); count++){
			res += IntToBinaryString(tmp[count]);
		}
	}
	infile.close();
	return res;
}