#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
 
    for(int z=0; z<t; z++)
    {
        int a; cin>>a;
        vector<int> v;
 
        for(int i=0; i<a; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
 
        int control = 1;
 
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==1) control++;
            if(v[i]>1) break;
        }
 
        if(control%2 == 1) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
 
}
