#include <iostream>
#include "BlockCryption.h"

using namespace std;

const BinaryString testX  = "0010011010110111";
const BinaryString testKey = "00111010100101001101011000111111";
const BinaryString testY = "1011110011010110";

void Test_BlockEncryption() {
	cout << "encrypt : " << testX << " to " << testY << endl;
	if (testY == BlockEncryption(testX, testKey)) {
		cout << "It Work ! ,Congratatution!\n";
	}
	else {
		cerr << "Wrong Result ,we want : " << testY << " \nbut we get : " << BlockEncryption(testX, testKey) << endl;
		cin.get();
		exit(1);
	}
}

void Test_BlockDecryption() {
	cout << "decrypt : " << testY << " to " << testX << endl;
	if (testX == BlockDecryption(testY, testKey)) {
		cout << "It Work ! ,Congratatution!\n";
	}
	else {
		cerr << "Wrong Result ,we want : " << testX << " \nbut we get : " << BlockDecryption(testY, testKey) << endl;
		cin.get();
		exit(1);
	}
}
/*
int main() {
	cout << "START TESTING ... \n";
	cout << "TESTING ENCRYPTION ... \n";
	Test_BlockEncryption();
	cout << "ENCRYPTION TEST DONE ... \n";
	cout << "TESTING DECRYPTION ... \n";
	Test_BlockDecryption();
	cout << "DECRYPTION TEST DONE ... \n";
	cout << "OVER ... !\n";
	cin.get();

	return 0;
}
*/

