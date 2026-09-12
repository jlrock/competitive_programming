#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int x = 1;

    while(x > 0){
        cin >> x;
        
        if(x < 0){
            x=0;
        }
        v.push_back(x);
    }

    int maior = 0;
    int tam = v.size();
    
    for(int i = 0; i < tam; i++){
        if(v[i]>maior){
            maior=v[i];
        }
    }

    cout << maior << endl;
    return 0;
}