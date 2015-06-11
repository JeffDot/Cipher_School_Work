#include "PiBox.h"
#include <iostream>

using namespace std;

BinaryString pis(BinaryString in, bool isDiverse) {
	BinaryString boxTmp[16] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" };
	int count = 0;
	for (; count < 16; count++) {
		boxTmp[count] = (isDiverse) ? DIVERSE_PIS[count] : PIS[count];
	}
	BinaryString tmp = "";
	BinaryString res = "";
	count = 0;
	while (count < in.size()) {
		tmp = in.substr(count, 4);
		res += boxTmp[bsPartSum(tmp)];
		count += 4;
	}
	return res;
}



BinaryString pip(BinaryString in) {
	BinaryString res = in;
	char         chtmp = '0';
	int count = 0;
	for (; count < in.size(); count++) {
		res[PIP[count] - 1] = in[count];
	}
	return res;
}