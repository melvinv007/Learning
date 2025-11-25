#include <iostream>
#include <map>
using namespace std;

// //number hashing
// int main()
// {
//     int n;
//     cout<<"No. of elements in array: ";
//     cin>>n;
//     int n_max;
//     cout<<"Max element that can be there: ";
//     cin>>n_max;
//     int arr[n], hash[n_max+1] = {};
//     cout<<"Enter elements of array: ";
//     for (int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         hash[arr[i]]++;
//     }
//     char inp='y';
//     int i;
//     while(inp != 'N')
//     {
//         cout<<"Check frequency of no. : ";
//         for (cin>>i;i<0 || i>n;cin>>i);
//         cout<<hash[i]<<endl;
//         cout<<"Continue?(N to stop): ";
//         cin>>inp;
//     }
// }

// //character hashing
// int main()
// {
//     string s;
//     getline(cin,s);
//     int hash[26]={};
//     for (int i=0;i<s.length();i++)
//     {
//         hash[s[i]-'a']++;
//     }
//     for (int i=0; i<26; i++)
//     {
//         cout<<hash[i]<<endl;
//     }
// }

//number hashing with map (STL)
int main()
{
    map<int,int> hash;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
    cout<<hash[5];
}