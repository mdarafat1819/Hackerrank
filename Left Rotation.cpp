#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int ara[n];
    for(int i = 0; i < n; i++) cin>>ara[i];
    for(int i = d; i < n; i++) cout<<ara[i]<<" ";
    for(int i = 0; i < d; i++) cout<<ara[i]<<" ";

    return 0;
}
