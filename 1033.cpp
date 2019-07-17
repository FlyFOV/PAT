#include <iostream>

using namespace std;
int main()
{
    int i;
    while (cin >> i)
    {
        int count=1;
        if(i==1)
        {
            cout <<"0";
            
        }
        else
        {
        i= i%2==0 ? i:3*i+1;
        while(i/2!=1)
        {
            i= i%2==0 ? i:3*i+1;
            i=i/2;
            count++;
        }
        cout << count;

        }

    }
    
}