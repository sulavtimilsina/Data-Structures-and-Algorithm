
#include<iostream>
using namespace std;
int main()
{
    int min,temp,j,i;
    int X[10]={2,5,11,7,89,34,7,9,0,24};
    cout<<"Unsorted form:"<<endl;
    cout<<"(";
    for (int i = 0; i < 10; i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<")";


    for (int i = 0; i < 9; i++)
    {
       min=i;
       for (int j = i+1; j < 10 ; j++)
       {
           if (X[j]<X[min])
            min = j;
       }
        temp=X[i];
        X[i]=X[min];
        X[min]=temp;
    }
    

    cout<<"\nSorted Output:"<<endl;
    cout<<"(";
    for (int i = 0; i < 10; i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<")";

    return 0;
}
