#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int inverse(int KEY){

  for(int i = 0; i < 26; i++){
    if(KEY*i%26 == 1){
      return i;
    };
  };

};

int main(){
  int KEY = 7;

  cout << inverse(KEY) << endl;

  return 0;

};
