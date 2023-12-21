#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<set>

using namespace std;

int main(){
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    
    while(ss >> word){
        
        if (word.find(',') == string::npos or word.find(',') == (word.length() - 1))
        {
            
            ++count;
        }
    }
    cout << count;
    return 0;
}
