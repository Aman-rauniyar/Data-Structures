#include<stdio.h>
int Q[5],item,rear=-1,front=-1;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice=1;
    while(choice)
    {
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display\n");
        printf("Enter your Choice: \t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            default:
            printf("\n Invalid Choice");
            break;
        }
    }
    return 0;
}
void enqueue()
{
    if(rear>4)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        {
            rear++;
            printf("Enter the elements: \t");
            scanf("%d",&item); 
            Q[rear]=item;       
        }
    }
}
void dequeue()
{
    if(rear<0)
    {
        printf("queue is empty\n");
    }
    else{
        for(int i=front;i<rear;i++)
        {
            Q[i]=Q[i+1];
            item=Q[front];
            front++;
            printf("The dequeue element is:%d\n",item);
            
        
        }
    }
}
void display()
{
    printf("Q elements are: \n");
    for(int i=front;i<=rear;i++)
    printf("%d\n",Q[i]);
}