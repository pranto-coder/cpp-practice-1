#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cout<<"enter the size: ";
    cin>>p;
    int arr[p];
    cout<<"enter the elements: "<<p;
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key: ";
    cin>>key;
    bool flag=false;
    for(int i=0;i<p;i++)
    {
        if (arr[i]==key)
        {
            cout<<"found at"<<i<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false)
        cout<<"not found"<<endl;
    return 0;
}
