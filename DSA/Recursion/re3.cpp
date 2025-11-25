#include <iostream>
using namespace std;

// //parameterised
// void func(int m,int n)
// {
//     if (n<1)
//     {
//         cout<<m<<endl;
//         return ;
//     }
//     func(m+n,n-1);
// }

// //functional - me
// int func(int m,int n)
// {
//     if (n<1) return m;
//     return func(m+n,n-1);
// }

//functional - striver
int func2(int n)
{
    if (n==0) return 0;
    return n + func2(n-1);
}

int main()
{
    int n=10;
    cout<<func2(n);
}