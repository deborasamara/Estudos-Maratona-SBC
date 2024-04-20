#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int pos_iterator = 0;
    for(unsigned int i = 0; i< s.size(); i++){
        // se encontrou um |, adicione um
        if(s[i] == '|'){
            pos_iterator++;
        }else if(pos_iterator == 0){
            cout << s[i];
        }else if(pos_iterator == 2){
            cout << s[i];
        }
    }
    return 0;
}