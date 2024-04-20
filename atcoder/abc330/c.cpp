#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d;
    cin >> d;
    int raiz = (sqrt(d));
    int res;
    int less = d; 

    for(int i = 0; i<raiz; i++)
    {
        for(int k = 0; k<raiz; k++)
        {
            res = abs((i*i + k*k) - d);

            if(res < less)
            {
                less = res;
            }
        }
    }

    cout << less;

    return 0;
}

