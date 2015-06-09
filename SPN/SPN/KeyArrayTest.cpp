#include "KeyArray.h"
#include <iostream>

using namespace std;

const BinaryString testKey1 = "12345678876543211234567887654321";//invaild
const BinaryString testKey2 = "001110101001010011010110001111111111";//invaild
const BinaryString testKey3 = "00111010100101001101011000111111";//vaild

const BinaryString testResult[5] = { "0011101010010100", "1010100101001101", "1001010011010110", "0100110101100011", "1101011000111111" };

void Test_KeyIsVaild() {
	cout << "Not a binary string : " << testKey1 << endl;
	if (!KeyIsVaild(testKey1)) {
		cout << "Bingo!" << endl;
	}
	else {
		cerr << "Wrong Check! ,Fuck it!\n";
		cin.get();
		exit(1);
	}
	cout << "too long : " << testKey2 << endl;
	if (!KeyIsVaild(testKey2)) {
		cout << "Bingo!" << endl;
	}
	else {
		cerr << "Wrong Check! ,Fuck it!\n";
		cin.get();
		exit(1);
	}
	cout << "Normal binary string : " << testKey3 << endl;
	if (KeyIsVaild(testKey3)) {
		cout << "Bingo!" << endl;
	}
	else {
		cerr << "Wrong Check! ,Fuck it!\n";
		cin.get();
		exit(1);
	}
}

void Test_GetKeyArray() {
	cout << "Just One Test ,Look At Your Book ,SON! :\n" << "Key is : " << testKey3 << endl;
	BinaryString tmp[5] = { "", "", "", "", "" };
	GetKeyArray(testKey3 ,tmp);
	int count = 0;
	for (; count < 5; count++) {
		if (tmp[count] != testResult[count]) {
			cerr << "Wrong key!\n";
			cerr << "You sent " << tmp[count] << " ,but we want : " << testResult[count] << endl;
			exit(1);
		}
		cout << "Done - " << count + 1 << endl;
	}
	cout << "Good Work!\n";
}
/*
int main() {
	cout << "START TESTING ... \n";
	cout << "TEST KEYISVAILD ... \n";
	Test_KeyIsVaild();
	cout << "TEST GETKEYARRAY ... \n";
	Test_GetKeyArray();
	cout << "TEST OVER !\n";
	cin.get();
	return 0;
}
*/