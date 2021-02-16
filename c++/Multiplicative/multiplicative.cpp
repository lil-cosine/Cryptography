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

//Encodes the message using the alphabet found in the above function
string tocipher(string text, int KEY){
  string calph = getAlph(KEY);
  string alph ("abcdefghijklmnopqustuvwxyz");
  string cipherText = "";
  for(int i = 0; i < text.length(); i++){
    int index = alph.find(text[i]);
    cipherText = cipherText + calph[(index)%26];
  };

return cipherText;

}

int main(){

  //KEY = factor the alohabet is multiplied by
  int KEY = 7;
  //plainText = message to be encoded
  string plainText = "yes";


  cout << tocipher(plainText, KEY) << endl;
  return 0;
};
