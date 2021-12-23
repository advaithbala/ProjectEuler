// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

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

    long int n = 2000000;
    long int sum = 0;

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            sum += i;
        }

    }
    
    cout << sum;
    return 0;

}