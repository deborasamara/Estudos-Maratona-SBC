#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, l, r;
    vector <int> a;
    int x;

    cin >> n >> l >> r;

    for(int i = 0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] <= l)
        {
            cout << l << " ";
        }
        else if(a[i] > l && a[i] < r) 
        {
            cout << a[i] << " ";
        }
        else if(a[i] >= r)
        {
            cout << r << " ";
        }

    }
    return 0;
}

