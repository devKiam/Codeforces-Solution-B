#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
 
    for(int j=0; j<t; j++)
    {
        int x; cin>>x;
 
        vector<int> v;
        map<int,int> m;
 
        for(int i=0; i<(2*x); i++)
        {
            int n; cin>>n;
            v.push_back(n);
        }
 
        for(int i=0; i<v.size(); i++)
        {
            if(m[v[i]]==0)
            {
                cout<<v[i]<<" ";
                m[v[i]]++;
            }
        }
 
        cout<<endl;
    }
}
