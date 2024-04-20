#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    copo G < Caneca M
    Inicialmente os dois estão vazios

    Depois de realizar a seguinte operação
    K vezes, determine quantos mililitros de água há no copo e na caneca, respectivamente.

    Quando G estiver cheio de água, descarte toda a água do copo

    Caso contrário, se G não estiver cheio, se M estiver vazio, encha com água

    Caso contrário, transfira a água de M para G até que M fique vazio ou G fique cheio

    */

    int k, g, m; // k vezes, CAPACIDADES (g - copo), (m - caneca);

    cin >> k >> g >> m;

    int copo = 0, caneca = 0;

    // cálculo - (g - copo), (m - caneca)
    for(int i = 0; i < k; i++)
    {
        if( copo == g) 
        {
            copo = 0; // esvazie o copo
        }
        else if( caneca == 0)
        {
            caneca = m; // encha a caneca
        }else if( caneca != 0)
        {
        // transfira a água de M para G até que (M - caneca fique vazio ou G - copo fique cheio)
            copo = copo + caneca;
            int resto = copo - g;
            if( resto == 0)
            {
                copo = copo;
                caneca = 0;
            }
            else if( resto > 0){
                copo = g;
                caneca = resto;
            }
            else if( resto < 0)
            {
                copo = copo;
                caneca = 0;
            }

        }

    }

    // Printar a qtd de água no (copo g) e na (caneca m) após k operações.
    cout << copo << " " << caneca;


    return 0;
}