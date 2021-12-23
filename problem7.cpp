// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int i){

    int sqrt_i = (int)sqrt((float)i) + 1;

        bool isPrime = true;
        for(int j = 2; j < sqrt_i; j++){
            if(i % j == 0){
                isPrime = false;
            }
        }
    return isPrime;
}

int main(){
    int n = 10001;
    int count = 0;
    int curNum = 2;

    int result;

    while(count < n){
        if(isPrime(curNum)){
            result = curNum;
            count++;
        }
        curNum++;
    }

    cout << result;
    return 0;
}