#ifndef PROGRAM4_H
#define PROGRAM4_H

#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

typedef struct char_freq{
  char c;
  double freq;

  char_freq(char c, double freq)
    :c(c),
     freq(freq)
  {}
} CFreq;

typedef struct char_code{
  char c;
  std::string code;
  char_code(char c, std::string code)
    :c(c),
     code(code)
  {}
} CCode;


//input: vector of CFreqs 
//returns: vector of CCodes
std::vector<CCode> getHuffCodes(std::vector<CFreq > cfs){

  //can define in separate .cpp file (make this into declaration) 
  //or define everything here (nothing in targetgtest.cpp)

  //following is for compilation purposes
  std::vector<CCode> codes;
  return codes;
}

#endif //PROGRAM4_H
