#include "BinaryString.h"
#include <fstream>

using namespace std;

const int FILE_SIZE = 2048;

BinaryString FileToBinaryString(string filename, bool isBinaryMode = false);

BinaryString GetCypherFromFile(string filename, bool isBinaryFile = false);
