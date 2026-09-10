#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n;

    for(int i=0; i <6; i++){
        cin >> n;
        if(i==0 || i==3){
            n*=3;
        }
        v.push_back(n);
    }

    int pC = v[0]+v[1];
    int pF = v[3]+v[4];

     if(pC>pF){
        cout << "C\n";
     }
     else if(pC<pF){
        cout << "F\n";
     }
     else{
        if(v[2]>v[5]){
            cout << "C\n";
        }
        else if(v[2]<v[5]){
            cout << "F\n";
        }
        else{
            cout << "=\n";
        }
     }
    return 0;
}