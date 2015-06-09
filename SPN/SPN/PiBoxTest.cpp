#include "PiBox.h"
#include  <iostream>

using namespace std;

const BinaryString testString1 = "0001110000100011";
const BinaryString testResult1 = "0100010111010001";

const BinaryString testString2 = "1000011101001010";
const BinaryString testResult2 = "0011100000100110";

const BinaryString testString3 = "1101010101101110";
const BinaryString testResult3 = "1001111110110000";

const BinaryString testString4 = "1010100100001101";
const BinaryString testResult4 = "0110101011101001";

void Test_pis() {
	cout << " u1->v1 - " << testString1 << " -> " << testResult1 << endl;
	if (testResult1 == pis(testString1)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult1 << " ,but actually is " << pis(testString1) << endl;
		cin.get();
		exit(1);
	}
	cout << " u2->v2 - " << testString2 << " -> " << testResult2 << endl;
	if (testResult2 == pis(testString2)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult2 << " ,but actually is " << pis(testString2) << endl;
		cin.get();
		exit(1);
	}
	cout << " u3->v3 - " << testString3 << " -> " << testResult3 << endl;
	if (testResult3 == pis(testString3)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult3 << " ,but actually is " << pis(testString3) << endl;
		cin.get();
		exit(1);
	}
	cout << " u4->v4 - " << testString4 << " -> " << testResult4 << endl;
	if (testResult4 == pis(testString4)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult4 << " ,but actually is " << pis(testString4) << endl;
		cin.get();
		exit(1);
	}
}

const BinaryString testString5 = "0100010111010001";
const BinaryString testResult5 = "0010111000000111";

const BinaryString testString6 = "0011100000100110";
const BinaryString testResult6 = "0100000110111000";

const BinaryString testString7 = "1001111110110000";
const BinaryString testResult7 = "1110010001101110";

void Test_pip() {
	cout << " v1->w1 - " << testString5 << " -> " << testResult5 << endl;
	if (testResult5 == pip(testString5)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult5 << " ,but actually is " << pip(testString5) << endl;
		cin.get();
		exit(1);
	}
	cout << " v2->w2 - " << testString6 << " -> " << testResult6 << endl;
	if (testResult6 == pip(testString6)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult6 << " ,but actually is " << pip(testString6) << endl;
		cin.get();
		exit(1);
	}
	cout << " v3->w3 - " << testString7 << " -> " << testResult7 << endl;
	if (testResult7 == pip(testString7)) {
		cout << "Right" << endl;
	}
	else {
		cerr << "Error ,the result should be : \n" << testResult7 << " ,but actually is " << pip(testString7) << endl;
		cin.get();
		exit(1);
	}
}
/*
int main() {
	cout << "TEST START ... " << endl;
	cout << "TEST FUNCTION PIP ... " << endl;
	Test_pip();
	cout << "TEST FUNCTION PIS ... " << endl;
	Test_pis();
	cout << "TEST OVER! ... \n";
	cin.get();
	return 0;
}
*/