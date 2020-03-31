#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss,item,s;
    vector<string>v;
    while(getline(cin,ss))
    {
      istringstream item(ss);
        while(item>>ss)
        {

            reverse(ss.begin(),ss.end());
                v.push_back(ss);


        }
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";

        }
        cout<<v[v.size()-1]<<endl;
        v.clear();

        ss.clear();
        item.clear();
    }









    return 0;
}
