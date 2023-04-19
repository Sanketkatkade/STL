#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // o(log(n))
    m[4] = "btg";
    m[3] = "rhk";
    m.insert({7, "hjk"});
    m[5] = "cdc"; // replace m[5] with new value
    // auto it = m.find(2); // if the value are not present it will return m.end()
    auto it = m.find(100); // o(log(n))
    if(it!=m.end())
    m.erase(it); //log(n)
    // if (it == m.end())
    // {
    //     cout << "No value" << endl;
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    print(m);
    // map<int,string>::iterator it;
    // for (it  = m.begin(); it != m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }cout<<endl;

    return 0;
}