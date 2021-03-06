// The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

// Let us list the factors of the first seven triangle numbers:

//  1: 1
//  3: 1,3
//  6: 1,2,3,6
// 10: 1,2,5,10
// 15: 1,3,5,15
// 21: 1,3,7,21
// 28: 1,2,4,7,14,28
// We can see that 28 is the first triangle number to have over five divisors.

// What is the value of the first triangle number to have over five hundred divisors?

#include <iostream>
#include <cmath>

using namespace std;

int numFacs(int n){

    int sqrt_n = (int)sqrt((float)n) + 1;
    int count = 1;
    if(n > 1){
        count = 2;
        for(int i = 2; i < sqrt_n; i++){
            if(n % i == 0){
                count += 2;
            }
        }
    }
    return count;
}

// bool isFacs(int n, int cond){
//     int count = 1;
//     if(n > 1){
//         count = 2;
//         for(int i = 2; i <= n/2; i++){
//             if(n % i == 0){
//                 count++;
//                 if(count > cond){
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }


int main(){
    int n = 500;
    long int count = 1;
    long int tri = 0;

    while(true){
        tri += count;
        if(numFacs(tri) > n){
            break;
        }
        count++;
    }

    cout << tri;
    return 0;
}