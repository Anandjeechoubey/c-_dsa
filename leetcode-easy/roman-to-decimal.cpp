#include <iostream>

using namespace std;

int romanToInt(string s) {
    int i = 1, v = 5, x = 10, l = 50, c = 100, d = 500, m = 1000;
    int sum = 0, prev = 0, curr;
    for(int a = s.length() -1 ; a>=0; a--){
        switch(s[a]){
            case 'I':
                curr = i;
                break;
            case 'V':
                curr = v;
                break;
            case 'X':
                curr = x;
                break;
            case 'L':
                curr = l;
                break;
            case 'C':
                curr = c;
                break;
            case 'D':
                curr = d;
                break;
            case 'M':
                curr = m;
                break;
            
        }
        if(curr >= prev){
            sum += curr;
        }
        else {
            sum -= curr;
        }
        prev = curr;
    }
    return sum;
}

int main() {
    string input = "LVIII";
    cout<<romanToInt(input);
    return 0;
}