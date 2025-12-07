#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        char a[6];
        for(int i=0; i<6; i++)
        {
            cin >> a[i];
        }
        bool hat = false;
        for(int i=0; i<=3; i++)
        {
            if(a[i] == 'W' && a[i+1] == 'W' && a[i+2] == 'W')
            {
                hat = true;
            }
        }
        if(hat)
        {
            cout << "YES" << endl;
        }   
        else
        {
            cout << "NO" << endl;
        }    
    }
    return 0;
}
