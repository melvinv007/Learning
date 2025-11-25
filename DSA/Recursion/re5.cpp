#include <iostream>
using namespace std;

//palindrome string

bool palin(string s,int index)
{
    if (index>s.length()/2) return true;
    if (s[index] != s[s.length()-index-1]) return false;
    return palin(s,index+1);
}

int main()
{
    string s;
    getline(cin,s);
    cout<<palin(s,0);
}