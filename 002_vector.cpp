#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>v){
    cout<<"Size "<<v.size()<<endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvec(v);
    return 0;
}