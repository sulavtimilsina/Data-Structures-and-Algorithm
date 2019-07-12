#include<iostream>
#define MAX 5
using namespace std;

int queue[10],front =-1,rear=-1,val,a,i;
void inqueue(int)
{
    if (front==(rear+1)%MAX)
    cout<<"Error!! Overflow!"<<endl;
    else
    {
        if (front == -1)
        {
            front=0;
            rear=0;
            queue[rear]=val;
        }
        else
        {
            rear=(rear+1)%MAX;
            queue[rear]=val;
        }
        
    }  
}
void dequeue()
{
    if (rear==-1)
    {
        cout<<"Queue is Empty:"<<endl;
    }
    else
    {
        a=queue[front];
        cout<<"Dequed Element is:"<<a<<endl;
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%MAX;
    }
    
}
void display()
{
    cout<<"Elements of the Queue are:"<<endl;
    if (rear<front)
    {
        for(i=front;i<=MAX-1;i++)
        {
            cout <<queue[i]<<endl;
        }
        for (i=0;i<=rear;i++)
        {
            cout<<queue[i]<<endl;
        }
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            cout <<queue[i]<<endl;
        }
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
