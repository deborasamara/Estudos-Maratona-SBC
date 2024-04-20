#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    programação de N dias como uma string de comprimento S, tendo 0, 1 e 2

    0 - ele não tem nada programado
    1 - sair pra comer
    2 - evento de programação competitiva

    sair pra comer -> camiseta lisa  OU com a logo
    evento de programção -> camiseta com a logo
    sem planos -> sem camiseta

    Depois de vestir uma camiseta, ele não poderá usá-la novamente até lavá-la

    Determine o número mínimo de camisetas que ele precisa comprar para poder usar camisetas adequadas em todos os dias programados durante o
    N dias.

    Se ele não precisar comprar camisetas novas, imprima
    0.

    */ 
    int n, m; cin >> n >> m;
    // n dias
    // m camisas lisas que ele já tem 
    string s; cin >> s; // string de planejamento de dias

    string dia;
    int atc = 0;
    int camisa_basica = m;
    int precisa_comprar = 0;
    // cálculo de camisas necessárias
    for(int i = 0; i < n; i++)
    {
        dia = s[i];
        if(dia == "0") // nada pra fazer
        {
            // repoe todas as camisas
            atc = precisa_comprar;
            camisa_basica = m;
        }if(dia == "1") // sair pra comer 
        {
            if(camisa_basica > 0)
            {
                camisa_basica -= 1;
            }else if(atc > 0)
            {
                atc -= 1;
            }else
            {
                precisa_comprar +=1; // precisa comprar
            }
            
        }if(dia == "2" ) // maratona
        {
            if(atc > 0)
            {
                atc -=1;
            }
            else
            {
                precisa_comprar +=1; // precisa comprar
            }
        }
    }
    
    cout << precisa_comprar;

    return 0;
}