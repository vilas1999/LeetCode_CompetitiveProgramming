#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = 0, b = n - 1;
    while (a != b)
    {
        if (arr[a] == 1)
        {

            while (arr[b] != 0)
            {
                b--;
            }
            arr[a] = 0;
            arr[b] = 1;
    
        }
        else
        {
            a++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    

    return 0;
}