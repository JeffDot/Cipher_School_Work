#include "PiBox.h"
#include <iostream>

using namespace std;

BinaryString pis(BinaryString in) {
	BinaryString tmp = "";
	BinaryString res = "";
	int count = 0;
	while (count < in.size()) {
		tmp = in.substr(count, 4);
		res += PIS[bsPartSum(tmp)];
		count += 4;
	}
	return res;
}

BinaryString pip(BinaryString in) {
	BinaryString res = in;
	char         chtmp = '0';
	int count = 0;
	for (; count < in.size(); count++) {
		res[PIP[count]-1] = in[count];
	}
	return res;
}