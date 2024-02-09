// REVERSE A NUMBER 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int rev = 0;

    while(n > 0){
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
                return 0; // Overflow
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
                return 0; // Overflow

    }
    cout << rev;
}