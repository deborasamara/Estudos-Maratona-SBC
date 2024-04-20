#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> numbers;
    int n_control;
    do{
        cin >> n_control;
        numbers.push_back(n_control);
    }while (n_control !=0);
    
    for(int i = numbers.size()-1; i>=0; i--){
        cout << numbers[i] << endl;
    }
    
    return 0;
}