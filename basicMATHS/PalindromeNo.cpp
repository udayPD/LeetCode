#include<iostream>
using namespace std;
int palindrome(int x){
    if(x < 0) return false;
    if(x != 0 and x%10 == 0) return false;

    int reverse = 0;
    while(x>reverse){
        reverse = (reverse*10) + x%10;
        x = x/10;
    }
    if(x == reverse){
        return true;
    }
    if(x == reverse/10){
        return true;
    }
    return false;
}
int main(){
   int x;
   cout << "Enter the number: ";
   cin >> x;
   palindrome(x);
}
