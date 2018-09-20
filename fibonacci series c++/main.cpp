#include <iostream>

using namespace std;

int main()
{
    int n,f,s,sum,cnt;
    cout << "Enter no. of terms:" << endl;
    cin >> n;
    for(cnt=1,f=0,s=1;cnt<=n;cnt++)
    {

        cout<<s;
        sum=f+s;
        f=s;
        s=sum;
    }
    cout<<"\b";
    return 0;
}
