/*Problem Statement
You are given a non-empty string 
S consisting of uppercase and lowercase English letters. Determine whether the following condition is satisfied:

The first character of 
S is uppercase, and all other characters are lowercase.
Constraints
1≤∣S∣≤100 (
∣S∣ is the length of the string 
S.)
Each character of 
S is an uppercase or lowercase English letter.
Input
The input is given from Standard Input in the following format:


NAO RESOLVIDO*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int aux;
    bool test = true;
    // Se estiver vazio
    if(s.empty()){
        cout << "No";
        return 0;
    }

    aux = s.length();// tamanho da string


    if( isupper(s[0])){ // Se começa com maiusculo 
        // Apenas uma letra
        if(aux<2){
            cout << "Yes";
            return 0;
        }
        // mais de uma letra
        while( aux >  0){
            if(isupper(s[aux - 1])){ // Se alguma letra seguinte for maiúscula, então não é
                test = false;
            }
            aux--;
        }
        if(test == false){
            cout << "No";
        }else{
            cout << "Yes";
        }
        return 0;
    }else{
        cout << "No";
    }
    return 0;
}