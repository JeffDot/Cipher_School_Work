#include "BinaryString.h"
#include <iostream>
#include <string>

using namespace std;

bool bsIsVaild(BinaryString op) {
	int count = 0;
	for (; count < op.size(); count++) {
		if (op[count] != '0' && op[count] != '1') {
			return false;
		}
	}
	return true;
}

BinaryString bsXOR(BinaryString op1, BinaryString op2) {
	if (op1.size() != op2.size()) {
		cerr << "Size unMatch!" << endl;
		return "DisMatch";
	}
	if (!bsIsVaild(op1) || !bsIsVaild(op2)){
		cerr << "Not a Binary String!" << endl;
		return "unBinary";
	}
	int count = 0;
	BinaryString res = "";
	for (; count < op1.size(); count++) {
		if (op1[count]!=op2[count]){
			res += "1";
		}
		else{
			res += "0";
		}
	}
	return res;
}

/*a binary string is count from right to left ,like :
		1  0  1  0  1  0  1  0  1  0  1  0  1  0  1  0                   
		<------------------------------
  and start with 0 ,so the number is :
		15 14 13 12 11 10 9  8  7  6  5  4  3  2  1  0
  so if we call bsPartSum("[up_string]" ,4) we will
  get the sum of 1010 ,it's 8*1 + 4*0 + 2*1 + 1*0 = 10
*/
int bsPartSum(BinaryString op ,int partSize) {
	if (!bsIsVaild(op)) {
		cerr << "Invaild Operator!" << endl;
		return -1;
	}
	if (partSize < 0) {
		cerr << "Invaild size!" << endl; 
		return -2;
	}
	
	int sum = 0;
	int pos = op.size() - 1;
	int count = 0;
	int bstep = 1;
	while (count < partSize) {
		int chtmp = op[pos] - 48;
		sum += bstep * chtmp;
		bstep *= 2;
		count++;
		pos--;//dont forget
	}
	return sum;
}