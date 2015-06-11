#include "FileToBinaryString.h"
#include <iostream>
using namespace std;

const string testFilename1 = "./testFile.txt";
const BinaryString f2bsRes1 = "00110001";//49-1
const string testFilename2 = "./testFileBinary.txt";
const BinaryString f2bsRes2 = "00110010";//0011001 .0

void Test_FileToString() {
	cout << "Test to read File(not binary) : " << testFilename1 << " and should be convert to : " << f2bsRes1 << endl;
	if (f2bsRes1 == FileToBinaryString(testFilename1)) {
		cout << "Done!\n";
	}
	else {
		cerr << "want : " << f2bsRes1 << " but get : " << FileToBinaryString(testFilename1) << endl;
		cin.get();
		exit(1);
	}
	cout << "Test to read File(binary) : " << testFilename1 << " and should have 16bit : " << endl;
	if (FileToBinaryString(testFilename2 ,true).size() == 16) {
		cout << "Done!\n";
	}
	else {
		cerr << "want 8bit " << " but get : " << FileToBinaryString(testFilename2) << endl;
		cin.get();
		exit(1);
	}
}

/*
int main(){
	cout << "TESTING FILETOBINARYSTRING ... \n";
	Test_FileToString();
	cout << "TEST DONE!\n";
	cin.get();
	return 0;
}
*/