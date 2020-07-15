#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    while(cin>>t)
    {
        for(int j=0; j<t; j++)
        {
            long long x, sum=0; cin>>x;
            vector<long long> v;
            
            for(int i=0; i<x; i++)
            {
                int vInput; cin>>vInput;
                v.push_back(vInput);
                sum+=vInput;
            }
            //done taking input
            
            //Using Kadane's ALGO for two times
            long long LM, GM; LM=GM=v[0];
            
            for(int i=1; i<v.size()-1; i++)
            {
                LM = max(LM+v[i], v[i]); //max() needs both argument's as same type i.e both are long long
                
                if(LM>GM) GM=LM;
            }
            
            long long LM2, GM2; LM2=GM2=v[1];
            
            for(int i=2; i<v.size(); i++)
            {
                LM2 = max(LM2+v[i], v[i]); //max() needs both argument's as same type i.e both are long long
                
                if(LM2>GM2) GM2=LM2;
            }
            //Used Kadane's ALGO for two times
            
            if(sum>GM && sum>GM2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
