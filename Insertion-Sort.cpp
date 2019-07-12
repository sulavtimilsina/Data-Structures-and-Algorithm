
#include<iostream>
using namespace std;
int main()
{
    int h,temp,j,i;
    int A[10]={2,5,11,7,89,34,7,9,0,24};
    cout<<"\nUnsorted form:"<<endl;
    cout<<"(";
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<")";

    for (int i = 1; i < 9; i++)
    {
        h=i;
        temp=A[i];
        while (h>0 && A[h-1]>temp)
        {
            A[h]=A[h-1];
            h=h-1;
        }
        A[h]=temp;  
    }
    
    cout<<"\nSorted Output:"<<endl;
    cout<<"(";
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<")";

    return 0;
}
