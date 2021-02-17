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

string affine(string plainText, int mKEY, int sKEY){
  string alph = "abcdefghijklmnopqustuvwxyz";
  string calph = cipherAlph(mKEY, sKEY);
  string cipherText = "";

  for(int i = 0; i < plainText.length(); i++){
    cipherText = cipherText + calph[alph.find(plainText[i])%26];
  }


  return cipherText;
}


int main(){

  int mKEY = 5;
  int sKEY = 7;
  string plainText = "yes";


  cout << affine(plainText, mKEY, sKEY) << endl;
  return 0;


}
