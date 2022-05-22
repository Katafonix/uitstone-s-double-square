#ifndef DOUBLE_SQUARE_H
#define DOUBLE_SQUARE_H

#include <string>
#include "algorithm"
using namespace std;


void transformation(string &str);

void fill_massive(string &key, string **mass);

string coder_decoder(string *bigram, string **mass1, string **mass2, int size);

void fill_bigram(string *bigram, string &str);

#endif // DOUBLE_SQUARE_H
