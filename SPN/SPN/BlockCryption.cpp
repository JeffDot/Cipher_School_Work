#include "BlockCryption.h"
#include <iostream>
#include <string>

using namespace std;

BinaryString BlockEncryption(BinaryString in, BinaryString Key) {
	BinaryString KeyArray[NR + 1] = { "", "", "", "", "" };
	GetKeyArray(Key, KeyArray);
	BinaryString wtmp = in;
	BinaryString utmp = "";
	BinaryString vtmp = "";
	int count = 0;
	for (; count < M; count++){
		utmp = bsXOR(wtmp, KeyArray[count]);
		vtmp = pis(utmp);
		if (count == M-1) {
			wtmp = bsXOR(vtmp, KeyArray[count+1]);
		}
		else{
			wtmp = pip(vtmp);
		}
	}
	return wtmp;
}

BinaryString BlockDecryption(BinaryString in, BinaryString Key){
	BinaryString KeyArray[NR + 1] = { "", "", "", "", "" };
	GetKeyArray(Key, KeyArray);
	BinaryString wtmp = in;
	BinaryString vtmp = "";
	BinaryString utmp = "";
	int count = M-1;
	for (; count >= 0; count--){
		if (count == M - 1) {
			vtmp = bsXOR(wtmp, KeyArray[count + 1]);
		}
		else{
			vtmp = pip(wtmp);
		}
		utmp = pis(vtmp, true);
		wtmp = bsXOR(utmp, KeyArray[count]);
	}
	return wtmp;
}