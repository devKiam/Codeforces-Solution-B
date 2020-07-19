#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    for(int j=0; j<t; j++)
    {
        string s; cin>>s;
        int R, P, S; R=P=S=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='R') R++;
            else if(s[i]=='P') P++;
            else S++;
        }

        if(R>=P && R>=S)
        {
            for(int i=0; i<s.size(); i++)
                cout<<"P";
        }
        else if(P>=R && P>=S)
        {
            for(int i=0; i<s.size(); i++)
                cout<<"S";
        }
        else{
            for(int i=0; i<s.size(); i++)
                cout<<"R";
        }

        cout<<endl;
    }
}
