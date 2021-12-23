// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

using namespace std;

int main(){
    int n = 20;
    int count = n;

    while(true){
        bool isTrue = true;

        for(int i = 1; i <= n; i++){
            if(count % i != 0){
                isTrue = false;
            }
        }

        if(isTrue){
            break;
        }

        count++;
        
    }

    cout << count;
}

