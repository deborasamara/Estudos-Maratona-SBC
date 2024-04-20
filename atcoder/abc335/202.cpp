/*

Problem Statement
You are given a string 
S consisting of lowercase English letters and digits.
S is guaranteed to end with 2023.
Change the last character of 
S to 4 and print the modified string.

Constraints
S is a string of length between 
4 and 
100, inclusive, consisting of lowercase English letters and digits.
S ends with 2023.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int tamanho_string_preciso = s.length() - 1;
    s[tamanho_string_preciso] = '4';
    cout << s;
    return 0;
}