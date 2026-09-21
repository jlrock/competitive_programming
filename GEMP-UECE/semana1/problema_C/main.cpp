#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v, vals;
    set<int> s;
    int x, n, count, res=0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }

    for (int i=0; i<v.size(); i++){
        s.insert(v[i]);
    }
    vector<int> stov(s.begin(), s.end());

    for(int j=0; j<stov.size(); j++){
        count=0;
        for (int i=0; i<v.size(); i++){
            if(stov[j]==v[i]){
                count++;
                if(i == v.size()-1){
                    vals.push_back(count);
                }
            }
            else{
                if(count!=0 || i==v.size()-1){
                    vals.push_back(count);
                    count=0;
                }
                else{
                    continue;
                }
            }
        }
    }

    for (int i=0; i<vals.size(); i++){
        if(vals[i]>res){
            res=vals[i];
        }
    }
    cout << res << endl;

    return 0;
}