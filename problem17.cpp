// If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

// NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

#include <iostream>

using namespace std;

string digitToLetter(int n){
    if(n == 1){
        return "one";
    }
    if(n == 2){
        return "two";
    }
    if(n == 3){
        return "three";
    }
    if(n == 4){
        return "four";
    }
    if(n == 5){
        return "five";
    }
    if(n == 6){
        return "six";
    }
    if(n == 7){
        return "seven";
    }
    if(n == 8){
        return "eight";
    }
    if(n == 9){
        return "nine";
    }
    if(n == 10){
        return "ten";
    }
    if(n == 11){
        return "eleven";
    }
    if(n == 12){
        return "twelve";
    }
    if(n == 12){
        return "twelve";
    }
    if(n == 13){
        return "thirteen";
    }
    if(n == 14){
        return "fourteen";
    }
    if(n == 15){
        return "fifteen";
    }
    if(n == 16){
        return "sixteen";
    }
    if(n == 17){
        return "seventeen";
    }
    if(n == 18){
        return "eighteen";
    }
    if(n == 19){
        return "nineteen";
    }
    if(n == 20){
        return "twenty";
    }
    if(n == 30){
        return "thirty";
    }
    if(n == 40){
        return "forty";
    }
    if(n == 50){
        return "fifty";
    }
    if(n == 60){
        return "sixty";
    }
    if(n == 70){
        return "seventy";
    }
    if(n == 80){
        return "eighty";
    }     
    if(n == 90){
        return "ninety";
    }
    if(n == 0){
        return "";
    }
    return "error";
}

string numToLetter(int n){

string result = "";

// int thousands = 0, hundreds = 0, tens = 0, ones = 0;
bool biggerThan99 = false;

if(n / 1000 > 0){
    biggerThan99 = true;
    int curDigit = n / 1000;
    result.insert(result.length(), digitToLetter(curDigit));
    result.insert(result.length(), "thousand");
    n = n % 1000;
}

if(n / 100 > 0){
    biggerThan99 = true;
    int curDigit = n / 100;
    result.insert(result.length(), digitToLetter(curDigit));
    result.insert(result.length(), "hundred");
    n = n % 100;
    if(n / 10 > 0){
        result.insert(result.length(), "and");
    }
}

if(n / 10 > 0){
    int curDigit = n / 10;

    if(curDigit == 1){
        result.insert(result.length(), digitToLetter(n % 100));
        return result;
    }
    else{
        result.insert(result.length(), digitToLetter(curDigit * 10));
        n = n % 100;
    }
} else{
    if(biggerThan99 && n != 0){
        result.insert(result.length(), "and");
    }
}

if(n > 0){
    int curDigit = n % 10;
    result.insert(result.length(), digitToLetter(curDigit));
}

return result;

}

int main(){

    int sum = 0;
    for(int i = 1; i <= 1000; i++){
        string cur = numToLetter(i);
        // cout << cur << endl;
        sum += cur.length();  
    }

    cout << endl << sum << endl;

    return 0;
}