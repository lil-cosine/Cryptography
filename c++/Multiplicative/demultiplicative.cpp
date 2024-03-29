#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Creates the alpahabet for the shift
string getAlph(int KEY){
  string alph ("abcdefghijklmnopqustuvwxyz");
  string cipherAlph ("");
  for(int i = 0; i < alph.length(); i++){
    cipherAlph = cipherAlph + alph[(i * KEY)%26];
  };
return cipherAlph;
}

//decodes the message using the alphabet found in the above function
string tocipher(string text, int KEY){
  string calph = getAlph(KEY);
  string alph ("abcdefghijklmnopqustuvwxyz");
  string plainText = "";
  for(int i = 0; i < text.length(); i++){
    int index = calph.find(text[i]);
    plainText = plainText + alph[(index)%26];
  };

return plainText;

}

int main(){

  //KEY = factor the alohabet is multiplied by
  int KEY = 7;
  //cipherText = message to be decoded
  string cipherText = "mcw";


  cout << tocipher(cipherText, KEY) << endl;
  return 0;
};
