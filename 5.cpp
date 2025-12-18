#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    string s ,t;
    cin >> s >> t;

    if(s.size() != t.size()){
        cout << "No";
        return 0;
    }

    map<char ,int> v;

    for( char c : s){
        v[c]++;
    }

    for(char c : t){
        v[c]--;
    }

    for(pair<char ,int> w : v){
       if(w.second != 0) {
        cout << "No";
        return 0;
       }
    }

    cout << "Yes";
    }













