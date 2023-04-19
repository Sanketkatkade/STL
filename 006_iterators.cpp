#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // vector<int>::iterator it;
    // for (it  = v.begin(); it != v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // cout<<(it->first)<<" "<<(it->second)<<endl;//another way to cout it
    }cout<<endl;

    vector<pair<int,int>>vp = {{1,2},{2,3}};
    for(auto &value : vp){
        cout<<value.first<<" "<<value.second<<" "<<endl;;

    }cout<<endl;

    for(int value : v){
        cout<<value<<" ";
    }cout<<endl;

    return 0;
}