#include "CTR.h"

#include <iostream>

using namespace std;

const int testCrt_Ti_Create = 65525;
const BinaryString test_Ti_res = "1111111111110101";

void Test_GetTi() {
	cout << "Test for GetTi < ctr = " << 65524 << " , " << "i = 1 " << endl;
	if (test_Ti_res == GetTi(testCrt_Ti_Create - 1, 1)) {
		cout << "Done!" << endl;
	}
	else {
		cerr << "want : " << test_Ti_res << "but get : " << GetTi(testCrt_Ti_Create - 1, 1) << endl;
		cin.get();
		exit(1);
	}
}
/*
int main() {
	cout << "TESTING GET TI : \n";
	Test_GetTi();
	cout << "TEST DONE\n";
	return 0;
}
*/