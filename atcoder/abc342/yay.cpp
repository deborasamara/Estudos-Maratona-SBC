#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int position;

    for(unsigned int i=0; i<s.length();i++)
    {
        if(i==0) // Primeiro índice
        {
            if(s[i]!=s[i+1] && s[i]!=s[i+2]){
                position = i +1;
                cout << position;
                break;
            }
        }

        else if(i == (s.length()-1)) // último índice
        {
            if(s[i]!=s[i-1] && s[i]!=s[i-2])
            {
                position = s.length();
                cout << position;
                break;
            }


        }else{ // indices do meio
            if(s[i]!=s[i+1] && s[i]!=s[i-1])
            {
                position = i+1;
                cout << position;
                break;
            }
        }
    }
    return 0;
} 