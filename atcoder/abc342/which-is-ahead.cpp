#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n_people; // quantidade pessoas na fila
    int a, b; // pessoas para comparar
    vector<int>people; // lista de pessoas
    int queries; // consultas para comparar

    cin >> n_people;
    for(int i = 0; i<n_people;i++)
    {
        int insert;
        cin >> insert;
        people.push_back(insert);
    }

    cin>>queries;
    for (int i = 0; i < queries; i++) // repetir e printar "queries" vezes
    {
        cin >> a >> b;
        for(int j =0; j<n_people;j++)
        {
            if(people[j] == a)
            {
                cout << a << endl;
                break;
            }
            if(people[j] == b)
            {
                cout << b << endl;
                break;

            }
        }

    }
    
    

    




    return 0;
}

