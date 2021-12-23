// https://projecteuler.net/problem=6

#include <iostream>

using namespace std;

int sumOfSquares(int n){
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum += i*i;
    }
    return sum;
}

int squareOfSums(int n){
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum += i;
    }
    return sum * sum;
}

int main(){
    
    int n = 100;
    cout <<  squareOfSums(n) - sumOfSquares(n);
    return 0;

}