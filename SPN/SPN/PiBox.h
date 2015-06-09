#ifndef _PIBOX_H	
#define _PIBOX_H
#include <string>
#include "BinaryString.h"

using namespace std;

const std::string PIS[16] =
{
	"1110",
	"0100",
	"1101",
	"0001",
	"0010",
	"1111",
	"1011",
	"1000",
	"0011",
	"1010",
	"0110",
	"1100",
	"0101",
	"1001",
	"0000",
	"0111"
};
const int PIP[16] = { 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15, 4, 8, 12, 16 };

BinaryString pis(BinaryString in);

BinaryString pip(BinaryString in);

#endif