#include <iostream>
using namespace std;

void func();

// //no stopping condition
// void func()
// {
//     cout<<1<<endl;
//     func();
// }

// //counter
// void func()
// {
//     static int cnt = 0;
//     cout<<cnt<<endl;
//     cnt++;
//     func();
// }

//base condition
void func()
{
    static int cnt = 0;
    if (cnt == 5) return;
    cnt++;
    cout<<cnt<<endl;
    func();
}

int main()
{
    func();
}