#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    n = qtd de produtos existentes
    s = quando o frete fica grátis
    k = preço do frete se não ficar grátis
    pi = preço do produto atual
    q1 = quantidade que vai comprar de cada
    
    */
    int n, s, k;
    cin >> n >> s >> k;
    int p;
    int q;
    int total_compra = 0;
    for(int i = 0; i < n; i++)
    {   
        cin >> p;
        cin >> q;
        total_compra = total_compra + p * q;
    }
    if(total_compra >= s)
    {
        cout << total_compra;
        return 0;
    }

    total_compra = total_compra + k;
    cout << total_compra;

    return 0;
}