#include <iostream>

using namespace std;

int main()
{
    int n,i,f1=0,f2=1,f3;
    cout<<"enter the number of terms of fibonachi series you want"<<endl;
    cin>> n;
    cout<<"first "<<n<<" terms of fiboanchi series are :-"<<endl;
    for(i=0;i<=n;i++)
    {
        if(i<=1)
            f3=i;
        else
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        cout<<f3<<endl;
    }
    return 0;
}

