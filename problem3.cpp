// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

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
    long int n = 600851475143;
    int result;

    int sqrt_n = (int)sqrt((float)n) + 1;

    for(int i = 1; i < sqrt_n; i++){

        int sqrt_i = (int)sqrt((float)i) + 1;

        bool isPrime = true;
        for(int j = 2; j < sqrt_i; j++){
            if(i % j == 0){
                isPrime = false;
            }
        }
        
        if(isPrime && n % i == 0){
            result = i;
        }
    }

    cout << result;
    return 0;
}