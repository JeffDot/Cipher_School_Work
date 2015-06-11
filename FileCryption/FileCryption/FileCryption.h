#include "BlockCryption.h"
#include "FileToBinaryString.h"
#include "CTR.h"

#include <string>

using namespace std;

BinaryString FileEncryption(BinaryString plainText, BinaryString Key ,int &ctr);

BinaryString FileDecryption(BinaryString CypherText, BinaryString Key ,int &ctr);


