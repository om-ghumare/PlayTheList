
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node* top= NULL;

void push()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    int x;
    cout<<"Enter the value\n";
    cin>>x;
    temp->data=x;
    temp->link=top;
    top = temp;
    cout<<"Item entered";
    
}

void pop()
{
    struct node* temp;
    if(top=NULL)
    cout<<"The stack is empty\n";
    temp=top;
    top=top->link;
    free(temp);
    cout<<"Item popped\n";
}

void display()
{
    struct node* temp;
    temp=top;
    if(temp==NULL)
    {
        cout<<"STACK IS EMPTY";
    }
    else
    {
        cout<<"Printing stack elements";
        while(temp!=NULL)
        {
            cout<<temp->data<<"\n";
            temp=temp->link;
        }
    }
}

int main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  