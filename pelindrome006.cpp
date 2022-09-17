#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
    cin>>str;
	string rev = string(str.rbegin(), str.rend());
    if (str==rev)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}