#include "FileCryption.h"

using namespace std;

BinaryString FileEncryption(BinaryString PlainText, BinaryString Key ,int &ctr) {
	BinaryString instr = PlainText;
	int array_count = instr.size() / ARRAY_SIZE;
	BinaryString res = "";
	BinaryString tmp = "";
	int count = 0;
	ctr = GetInitCtr();
	for (; count < array_count; count++) {
		BinaryString Ti = GetTi(ctr, count);
		tmp = bsXOR(instr.substr(count*ARRAY_SIZE, ARRAY_SIZE), BlockEncryption(Ti, Key));
		res += tmp;
	}
	return res;
}

BinaryString FileDecryption(BinaryString CypherText, BinaryString Key ,int &ctr) {
	BinaryString instr = CypherText;
	int array_count = instr.size() / ARRAY_SIZE;
	BinaryString res = "";
	BinaryString tmp = "";
	int count = 0;
	for (; count < array_count; count++) {
		BinaryString Ti = GetTi(ctr, count);
		tmp = bsXOR(instr.substr(count*ARRAY_SIZE, ARRAY_SIZE), BlockEncryption(Ti, Key));
		res += tmp;
	}
	return res;
}