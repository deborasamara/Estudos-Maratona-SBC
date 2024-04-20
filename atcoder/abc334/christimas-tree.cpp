// Print the number of Christmas trees that will be set up between Takahashi and Aoki (including the points where they are standing).
    // a = coordenada de referência. se começar negativa está em direção a oeste, se for positiva está em direção a leste
    // m = espaçamento entre as árvores
    // l - intervalo inicio
    // r - intervalo fim

    // intervalo L -> R
    // Ponto A com árvore

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, m, l, r; cin >> a >> m >> l >> r;
    vector <int> arvores;
    int qtd_arvores = 0;
    //  a < l  ,  a > l, a == 0
    // MOVER TUDO PRA DIREITA ATÉ SER TUDO POSITIVO
    if(l<0) // adicionar números até existir um intervalo positivo de 0 a r caso o l seja negativo
    {
        int aux = l * -1;
        l = 0;
        r = r + aux;
        a = a + aux;
    }
    
    if(a<0) // adicionar números até ser possivél um intervalo totalmente positivo
    {
       int aux = a * -1;
       a = 0;
       r = r + aux;
       l = l + aux;
    }
    // PREENCHER ÁVORES E RESOLVER QTD
    if(a<l)
    {
        // preencher
        for(int i = a; i<= r; i+=m) // preencher para direita
        {
            arvores[i] = 1;
        }
        // contar
        for(int i = l; i <= r; i+=m)
        {
            if(arvores[i] == 1)
            {
                qtd_arvores+=1;
            }
        }
    }
    else if(a > l)
    {
        // preencher
        for (int i = a; i <= r; i+=m) // preencher para direita
        {
            arvores[i] = 1;
        }

        for (int i = a; i <= l; i-=m) // preencher para esquerda
        {
            arvores[i] = 1;
        }
        // contar
         for(int i = l; i <= r; i+=m)
        {
            if(arvores[i] == 1)
            {
                qtd_arvores+=1;
            }
        }
    }
    
    cout << qtd_arvores;

    return 0;
}