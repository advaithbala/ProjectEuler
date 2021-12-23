// A palindromic number reads the same both ways. 
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <cmath>

using namespace std;

int palindrome(int n){

    //palindrome to be returned
    int pal = 0;
    //count to be multiplied by 10;
    int count = 1;

    int curNum = n;

    while(curNum > 0){

        int curDigit = curNum % 10;
        pal *= 10;
        pal += curDigit;
        count++;
        curNum = curNum / 10;

    }

    return pal;

}

int main(){

    int result = 0;

    for(int i = 100; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            int n = i * j;
            if(n == palindrome(n) && n > result){
                result = n;
            }
        }
    }

    cout << result;

    return 0;
}

