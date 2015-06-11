#ifndef _PIBOX_H	
#define _PIBOX_H
#include <string>
#include "BinaryString.h"

using namespace std;

const string PIS[16] =
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
const string DIVERSE_PIS[16] =
{
	"1110",//e
	"0011",//3
	"0100",//4
	"1000",//8
	"0001",//1
	"1100",//c
	"1010",//a
	"1111",//f
	"0111",//7
	"1101",//d
	"1001",//9
	"0110",//6
	"1011",//b
	"0010",//2
	"0000",//0
	"0101"//5
};

const int PIP[16] = { 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15, 4, 8, 12, 16 };

//may need?
//int *diversePIP(const int *in);

BinaryString pis(BinaryString in, bool isDiverse = false);

BinaryString pip(BinaryString in);

#endif