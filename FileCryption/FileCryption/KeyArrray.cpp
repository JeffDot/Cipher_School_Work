#include "KeyArray.h"
#include <iostream>

using namespace std;

bool KeyIsVaild(BinaryString Key) {
	if (Key.size() != KEY_SIZE) {
		return false;
	}
	if (!bsIsVaild(Key)) {
		return false;
	}
	return true;
}

void GetKeyArray(BinaryString Key, BinaryString *res) {
	if (!KeyIsVaild(Key)) {
		cerr << "InVaild Key !" << endl;
		exit(1);
	}
	//5 should be NR + 1
	int count = 0;
	for (; count < 5; count++) {
		res[count] = Key.substr(4 * count, 16);
	}

}