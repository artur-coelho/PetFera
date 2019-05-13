#ifndef _FUNCOES_UTEIS_H
#define _FUNCOES_UTEIS_H

#include <iostream>
#include <string>

using namespace std;

string converter_para_maisculo(string& sua_string)
{
  for(int i = 0; i <sua_string.length(); i++)
  {
    sua_string[i] = toupper(sua_string[i]);
  }
  return sua_string;
}
#endif