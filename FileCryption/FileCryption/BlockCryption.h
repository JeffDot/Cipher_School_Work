#ifndef _BLOCKENCRYPTION_H
#define _BLOCKENCRYPTION_H
#include "BinaryString.h"
#include "KeyArray.h"
#include "PiBox.h"
#include <iostream>

const int NR = 4;
const int M = 4;

using namespace std;

BinaryString BlockEncryption(BinaryString x, BinaryString Key);

BinaryString BlockDecryption(BinaryString y, BinaryString Key);

#endif