#include <iostream>
#include <map>

using namespace std;

map<int, bool> hasVisited;
map<int, long> lenMap;

long collatzLength(long n){
    long count = 1;
    while(n != 1){
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
        count++;
    }
    return count;
}

int main(){

    long max = 0;
    int result;

    for(int i = 1; i < 1000000; i++){
        long curLength = collatzLength(i);
        if(max < curLength){
            max = curLength;
            result = i;
        }
    }
 
    cout << result << endl;

    return 0;

}