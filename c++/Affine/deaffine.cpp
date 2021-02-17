#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string cipherAlph(int mKEY, int sKEY){
  string alph = "abcdefghijklmnopqustuvwxyz";
  string calph = "";

  for(int i = 0; i < alph.length(); i++){
    calph = calph + alph[((i*mKEY)+sKEY)%26];
  }

  return calph;
}

string deaffine(string cipherText , int mKEY, int sKEY){
  string alph = "abcdefghijklmnopqustuvwxyz";
  string calph = cipherAlph(mKEY, sKEY);
  string plainText = "";

  for(int i = 0; i < cipherText.length(); i++){
    plainText += alph[calph.find(cipherText[i])];
  }
  return plainText;
}

int main(){

  int mKEY = 5;
  int sKEY = 7;
  string cipherText  = "xbt";

  cout << deaffine(cipherText , mKEY, sKEY) << endl;

  return 0;
}
