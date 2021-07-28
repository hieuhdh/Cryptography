#include <iostream>
#include <string>
#include<unordered_map>
#include<map>

const int LOWER_A = 97;
const int LOWER_B = 98;
const int LOWER_C = 99;
const int LOWER_D = 100;
const int LOWER_E = 101;
const int LOWER_F = 102;
const int LOWER_G = 103;
const int LOWER_H = 104;
const int LOWER_I = 105;
const int LOWER_J = 106;
const int LOWER_K = 107;
const int LOWER_L = 108;
const int LOWER_M = 109;
const int LOWER_N = 110;
const int LOWER_O = 111;
const int LOWER_P = 112;
const int LOWER_Q = 113;
const int LOWER_R = 114;
const int LOWER_S = 115;
const int LOWER_T = 116;
const int LOWER_U = 117;
const int LOWER_V = 118;
const int LOWER_W = 119;
const int LOWER_X = 120;
const int LOWER_Y = 121;    
const int LOWER_Z = 122;

const int UPPER_A = 65;
const int UPPER_B = 66;
const int UPPER_C = 67;
const int UPPER_D = 68;
const int UPPER_E = 69;
const int UPPER_F = 70;
const int UPPER_G = 71;
const int UPPER_H = 72;
const int UPPER_I = 73;
const int UPPER_J = 74;
const int UPPER_K = 75;
const int UPPER_L = 76;
const int UPPER_M = 77;
const int UPPER_N = 78;
const int UPPER_O = 79;
const int UPPER_P = 80;
const int UPPER_Q = 81;
const int UPPER_R = 82;
const int UPPER_S = 83;
const int UPPER_T = 84;
const int UPPER_U = 85;
const int UPPER_V = 86;
const int UPPER_W = 87;
const int UPPER_X = 88;
const int UPPER_Y = 89;
const int UPPER_Z = 90;

#define cls system("cls")
#define pause system("pause")

// namespaces 

using namespace std;

// Swap function

void SWAP (int &element1, int &element2){
		element1 ^= element2 ^= element1 ^= element2;
}

