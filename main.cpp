#include <iostream>

using namespace std;

int main()
{
    int feet,inches,totalinches;
    double centimeter;
    cout<<"enter inches and feets:";
    cin>>inches>>feet;
    totalinches=12*inches+feet;
    cout<<totalinches<<endl;
    centimeter=totalinches*2.54;
    cout<<centimeter;
    return 0;
}
