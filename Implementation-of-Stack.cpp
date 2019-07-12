#include<iostream>
#define MAX 5
using namespace std;

int queue[100],front =0,rear=0,val,a,i;
void inqueue(int)
{
    if (rear>MAX-1)
    cout<<"Error!! Overflow!"<<endl;
    else
    {
        queue[rear]=val;
        rear++;
    }  
}
void dequeue()
{
    if (rear==-1)
    {
        cout<<"Stack is Empty:"<<endl;
    }
    else
    {
        a=queue[front];
        cout<<"Dequed Element is:"<<a<<endl;
        front++;
    }
    
}
void display()
{
    cout<<"Elements of the Queue are:"<<endl;
    for(i=front;i<=rear-1;i++)
    {
        cout <<queue[i]<<endl;
    }
}
int main()
{
    int c;
    do
    {
        cout<<"Choose one operation:\n\t1.Enqueue\n\t2.Dequeue\n\t3.Display\n\t4.Exit"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:
            {
                cout<<"Enter the value to be inserted:"<<endl;
                cin>>val;
                inqueue(val);
                break;
            }
            case 2:
            {   
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exited"<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid Choice!!";
            }

        }
    }while(c!=4);
    return 0;
}