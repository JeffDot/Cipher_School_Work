#include "BinaryString.h"
#include <iostream>

using namespace std;

const BinaryString testString1 = "000000000";
const BinaryString testString2 = "11111111";
const BinaryString testString3 = "12345678";
const BinaryString testString4 = "10101010";
const BinaryString testString5 = "11111111";
const int			partSize1 = -1;
const int			partSize2 = 4;

void Test_bsIsVaild() {
	cout << "Right1 - " << testString1 << endl;
	if (bsIsVaild(testString1)) {
		cout << "Right!" << endl;
	}
	else {
		cout << "Wrong!" << endl;
		cin.get();
		exit(1);
	}
	cout << "Right2 - " << testString2 << endl;
	if (bsIsVaild(testString2)) {
		cout << "Right!" << endl;
	}
	else {
		cout << "Wrong!" << endl;
		cin.get();
		exit(1);
	}
	cout << "Wrong3 - " << testString3 << endl;
	if (!bsIsVaild(testString3)) {
		cout << "Right!" << endl;
	}
	else {
		cout << "Wrong!" << endl;
		cin.get();
		exit(1);
	}
	cout << "Right4 - " << testString4 << endl;
	if (bsIsVaild(testString4)) {
		cout << "Right!" << endl;
	}
	else {
		cout << "Wrong!" << endl;
		cin.get();
		exit(1);
	}
}

void Test_bsXOR() {
	cout << "size disMatch : " << testString1 << " and " << testString2 << endl;
	if ("DisMatch" == bsXOR(testString1, testString2)) {
		cout << "Right - match test" << endl;
	}
	else {
		cerr << "Wrong - match test" << endl;
		cin.get();
		exit(1);
	}
	cout << "All 1 : " << endl;
	if ("00000000" == bsXOR(testString2, testString5)) {
		cout << "Right Cal!" << testString2 << " XOR " << testString5 << " = 00000000" << endl;
	}
	else{
		cerr << "All 1 cal error" << endl;
		cin.get();
		exit(1);
	}
	cout << "normal test : " << testString2 << " XOR " << testString4 << " = 01010101" << endl;
	if ("01010101" == bsXOR(testString2, testString4)) {
		cout << "Right!" << endl;
	}
	else {
		cerr << "Normal cal Error!" << endl;
		cin.get();
		exit(1);
	}

}

void Test_bsPartSum() {
	cout << "part size vaild test : " << partSize1 << endl;
	if (-2 == bsPartSum(testString1, partSize1)) {
		cout << "Right!" << endl;
	}
	else {
		cerr << "part size invaild test failed!" << endl;
		cin.get();
		exit(1);
	}
	cout << "Normal test ,size : " << partSize2 << endl;
	if (10 == bsPartSum(testString4, partSize2)) {
		cout << "(1010)10 = " << 10 << endl;
	}
	else{
		cerr << "Error !" << endl;
		cerr << "The Result is : " << bsPartSum(testString4, partSize2) << " ,actually should be : " << 10;
		cin.get();
		exit(1);
	}
	cout << "UnNormal test ,size : " << 0 << endl;
	if (0 == bsPartSum(testString4, 0)) {
		cout << "()10 = " << 0 << endl;
	}
	else{
		cerr << "Error !" << endl;
		cin.get();
		exit(1);
	}
	cout << "default para test ,size : " << 4 << endl;
	if (10 == bsPartSum(testString4)) {
		cout << "(1010)10 = " << 10 << endl;
	}
	else{
		cerr << "Error !" << endl;
		cerr << "Result is : " << bsPartSum(testString4) << " ,actually should be " << 10 << endl;
		cin.get();
		exit(1);
	}
}
/*
int main() {
	cout << "IS VAILD TEST : \n";
	Test_bsIsVaild();
	cout << "BS XOR TEST : \n";
	Test_bsXOR();
	cout << "BS PART SUM TEST : \n";
	Test_bsPartSum();
	cout << "Over Test!" << endl;
	cin.get();

	return 0;
}
*/