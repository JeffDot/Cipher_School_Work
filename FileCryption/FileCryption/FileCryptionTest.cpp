#include "FileCryption.h"

using namespace std;

const BinaryString TMPKey = "00111100101010101100000010100101";
const string test_file_in1 = "testFile.txt";
const string test_file_in2 = "testFileBinary.txt";

void Test_FileEncryption() {
	cout << "Test file encryption (un satisfy with this test) : " << test_file_in1 << endl;
	int ctr1 = 0;
	BinaryString inf1 = FileToBinaryString(test_file_in1);
	if (FileEncryption(inf1, TMPKey ,ctr1).size() % 16) {
		cerr << "ERROR\n";
		cerr << "We got : " << FileEncryption(inf1, TMPKey ,ctr1) << endl;
		cin.get();
		exit(1);
	}
	else {
		cout << "Done!\n";
		cout << "RESULT : " << FileEncryption(inf1, TMPKey,ctr1) << endl;
	}
	cout << "Test file encryption (fine) : " << test_file_in2 << endl;
	int ctr2 = 0;
	BinaryString inf2 = FileToBinaryString(test_file_in2 ,true);
	if (FileEncryption(inf2, TMPKey ,ctr2).size() % 16) {
		cerr << "ERROR\n";
		cerr << "We got : " << FileEncryption(inf2, TMPKey ,ctr2) << endl;
		cin.get();
		exit(1);
	}
	else {
		cout << "Done!\n";
	}
}

void Test_FileDecryption() {
	cout << "Test file decryption : " << test_file_in1 << endl;
	BinaryString inf1 = FileToBinaryString(test_file_in1);
	int ctr1 = 0;
	BinaryString tmpRes1 = FileEncryption(inf1, TMPKey, ctr1);
	if (inf1 != FileDecryption(tmpRes1,TMPKey ,ctr1)) {
		cerr << "ERROR\n";
		cerr << "We got : " << tmpRes1 << endl;
		cin.get();
		exit(1);
	}
	else {
		cout << "Done!\n";
		cout << "RESULT : " << tmpRes1 << endl;
	}
	cout << "Test file encryption (fine) : " << test_file_in2 << endl;
	BinaryString inf2 = FileToBinaryString(test_file_in2, true);
	int ctr2 = 0;
	BinaryString tmpRes2 = FileEncryption(inf2, TMPKey, ctr2);
	if (inf2 != FileDecryption(tmpRes2, TMPKey, ctr2)) {
		cerr << "ERROR\n";
		cerr << "We got : " << tmpRes2 << endl;
		cin.get();
		exit(1);
	}
	else {
		cout << "Done!\n";
	}
}

int main() {
	cout << "TESTING ENCRYPTION ... \n";
	Test_FileEncryption();
	cout << "TEST DNOE!\n";
	cout << "TESTING DECRYPTION ... \n";
	Test_FileEncryption();
	cout << "TEST DNOE!\n";
	cin.get();
	return 0;
}