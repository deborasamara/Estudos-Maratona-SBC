#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n_people, media;
    vector <int> points;
    int aux;
    int pass = 0;

    cin >> n_people >> media;

    for(int i = 0; i<n_people; i++)
    {
        cin >> aux;
        points.push_back(aux);
    }

    for (int i = 0; i < n_people; i++)
    {
        if(points[i] >= media)
        {
            pass+=1;
        }
    }
    cout << pass;

    return 0;
}

