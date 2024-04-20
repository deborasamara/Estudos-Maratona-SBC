#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M, D, y, m, d;

    cin>> M >> D; // qtd de meses e dias em cada mes
    cin >> y >> m >> d; // data do input

    // mostrar data do próximo dia
    if(d < D)
    {
        d+=1;
        cout << y << " " << m << " " << d;
    }
    else if(d == D)
    {
        if( m < M)
        {
            m+=1;
            d = 1;
            cout << y << " " << m << " " << d;
        }
        else if( m == M)
        {
            d = 1;
            y+=1;
            m = 1;
            cout << y << " " << m << " " << d;
        }
    }

    return 0;
}