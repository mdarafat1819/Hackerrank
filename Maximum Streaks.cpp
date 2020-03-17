#include <iostream>

using namespace std;

int main()
{
    string str[50];
    int n, head = 0, tail = 0, r1 = 0, r2 = 0;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++)  cin>>str[i];
    for(int i = 0; i < n; i++)
    {
        if(str[i] == "Heads")
        {
            head++;
            r2 = max(r2, tail);
            tail = 0;
        }
        else
        {
            tail++;
            r1 = max(r1, head);
            head = 0;
        }
    }
    cout<<max(r1, head)<<" "<<max(r2, tail)<<endl;
    return 0;
}
