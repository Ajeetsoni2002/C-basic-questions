#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
char s[]="how are you if yes say yes";
for(int i=0;i<strlen(s);i++){
    if(s[i]!=' '){
        count++;
    }
}
cout<<count;

    return 0;
}