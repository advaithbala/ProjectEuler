// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

// What is the sum of the digits of the number 2^1000?

#include <iostream>
#include <fstream>

using namespace std;


string stringAdd(string s1, string s2){

    string sum = "";
    
    if(s1.length() < s2.length()){
        swap(s1, s2);
    }
    //now s1 is always bigger than s2

    int l1 = s1.length();
    int l2 = s2.length();

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;

    for(int i = 0; i < s2.length(); i++){
        int n1 = s1[i] - '0';
        int n2 = s2[i] - '0';
        int digitSum = n1 + n2 + carry;
        sum.push_back(digitSum % 10 + '0');
        if(digitSum > 9){
            carry = 1;
        } else{
            carry = 0;
        }
    }

    for(int i = s2.length(); i < s1.length(); i++){
        int n1 = s1[i] - '0';
        n1 = n1 + carry;
        if(n1 > 9){
            carry = 1;
            n1 = 10 - n1;
        } else{
            carry = 0;
        }
        sum.push_back(n1 + '0');
    }

    if(carry == 1){
        sum.push_back('1');
    }

    reverse(sum.begin(), sum.end());
    return sum;

}

int main(){
    int m = 2;
    int n = 1000;

    string result = "";
    result.push_back((char)(m + '0'));

    for(int i = 1; i < n; i++){
        result = stringAdd(result, result);
        // cout << result << endl;
    }
    
    // cout << endl;
    // cout << result << endl;
    // cout << endl;

    long int digitSum = 0;
    for(int i = 0; i < result.length(); i++){
        digitSum += result[i] - '0';
    }

    cout << digitSum;

}
