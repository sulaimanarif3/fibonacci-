#include <iostream>

using namespace std;

int main()
{
int arr[100],x,i,j,temp;
    cout<<"enter size of array: ";
    cin>>x;
    cout<<"enter elements in array: ";
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;


            }
        }
    }
    cout<<"arranged:"<<endl;
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
