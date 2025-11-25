#include <iostream>
using namespace std;

void func(int m,int n);

// //print 1 to N, (1,N)
// void func(int m,int n)
// {
//     // static int m = 1;
//     cout<<m<<endl;
//     if (m==n) return;
//     func(m+1,n);
// }

// //print N to 1 , (1,N)
// void func(int m,int n)
// {
//     cout<<n-m+1<<endl;
//     if (m==n) return;
//     func(m+1,n);
// }

//Backtracking N to 1
void func(int m,int n)
{
    if (m>n) return; //we have to make function wait till end to print last value first
    func(m+1,n);
    cout<<m<<endl;

}

int main()
{
    int N = 5;
    func(1,N);
    // cout<<"done"<<endl;
}