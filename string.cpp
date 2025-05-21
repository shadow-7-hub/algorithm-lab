#include<bits/stdc++.h>
using namespace std;


#define fast_io ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);


int main()
{
    fast_io;
    int a;
    cin>>a;
    vector<int>vec(a);
    for (int i=0;i<a;++i) {
        cin>>vec[i];
    }
    int mx = 0;

    for (int i=0;i<a;++i) {
        if(vec.at(i) > mx) {
            mx = vec.at(i);
        }
    }
    for (int i=0;i<a;++i) {
        if(vec.at(i) == mx) {
            continue;
        }
    }
    int smx = 0;
    for (int i=0;i<a;++i) {
        if(vec.at(i) > smx) {
            smx = vec.at(i);
        }
    }
    cout<<smx<<endl;
    return 0;
}
