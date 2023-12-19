#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    int charCount = 0, intCount = 0, spCount = 0;
    for(auto &x : s){
        if(isdigit(x)){
            ++intCount;
        }
        else if(isalpha(x)){
            ++charCount;
        }
        else{
            ++spCount;
        }
    }

    cout << charCount << ' ' << intCount << ' ' << spCount;
    return 0;
}
