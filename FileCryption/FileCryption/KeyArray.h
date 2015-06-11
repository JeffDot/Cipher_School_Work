#ifndef _KEYARRAY_H
#define _KEYARRAY_H
#include "BinaryString.h"
#include <iostream>

const int KEY_SIZE = 32;

using namespace std;

//Key must be 32 bit ,or it will get a Error!
//32bit Key can get 5 16bit key is because each plain-text is 16bit 
//log2^32 = 5
//for programming ,we start from 0 ,so the key[i] = Key[4*i] (i = 0->4)

bool KeyIsVaild(BinaryString Key);

void GetKeyArray(BinaryString Key, BinaryString *res);

#endif