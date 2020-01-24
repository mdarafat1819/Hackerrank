#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, sum1 = 0, sum2 = 0, value;
    cin>>d;
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
        {
            cin>>value;
            if(i == j) sum1 += value;
            if ((i + j) == (d - 1)) sum2 += value;
        }
    cout<<abs(sum1 - sum2)<<endl;

    return 0;
}
