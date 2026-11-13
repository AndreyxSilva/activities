#include <stdio.h>
#include <iostream>
 
 using namespace std;
 
int main() {

int qnt;
long int in = 0;
long int out = 0;
long int num = 0;


cin >>  qnt;

 for(int x=1; x <= qnt; x++){
   
    cin >>  num;
   
    if (num >= 10 && num <= 20) {
    in++;
    }else{
    out++;
    }
   
 }

    
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
