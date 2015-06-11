#include "BinaryString.h"
#include <time.h>
#include <random>

using namespace std;

const int MAX_CTR = 32904;//overflow .... is dangerous

int GetInitCtr();

BinaryString GetTi(int iniCtr ,int i);