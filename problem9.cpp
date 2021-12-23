// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

using namespace std;

int main(){
    int n = 1000;
    int result;
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= n - a; b++){
            for(int c = 1; c<= n - a - b; c++){
                if(a < b && b < c){
                    if(a + b+ c == 1000 && a*a + b*b == c*c){
                        result = a*b*c;   
                    }
                }
            }
        }
    }

    cout << result;
}