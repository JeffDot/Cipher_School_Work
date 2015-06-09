#ifndef _BINARYSTRING_H
#define _BINARYSTRING_H
#include <string>
using namespace std;

typedef string BinaryString;

//vaild check
bool bsIsVaild(BinaryString op);

//XOR Operation
BinaryString bsXOR(BinaryString op1, BinaryString op2);

//get part sum Operation
int bsPartSum(BinaryString op , int partSize = 4);
#endif