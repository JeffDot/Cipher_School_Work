#ifndef _BINARYSTRING_H
#define _BINARYSTRING_H
#include <string>
using namespace std;

const int ARRAY_SIZE = 16;

const int PART_DEFAULT = 4;

const int ASCII_SIZE = 8;

const int MAX_BIN_SIZE = 32;

typedef string BinaryString;

//vaild check
bool bsIsVaild(BinaryString op);

//XOR Operation
BinaryString bsXOR(BinaryString op1, BinaryString op2);

//get part sum Operation
int bsPartSum(BinaryString op, int partSize = PART_DEFAULT);

BinaryString IntToBinaryString(int in ,int bs_len = ASCII_SIZE);

#endif