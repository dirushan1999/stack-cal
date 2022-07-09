#include<stdio.h>
#include<stdlib.h>
int n;
int top=-1;
int a[20];
int x,y,z;


void push(int x)
{
    top++;
    a[top]=x;
}
int pop()
{
    int temp=a[top];
    top--;
}

void ans(char p[])
{
    for(int i=0;i<n;i++)
    {
        if(p[i]!='+' || p[i]!='-' || p[i]!='*')
        {
            push((int)(p[i]));
        }
        else
        {x=pop();
        y=pop();
switch(p[i])
{
case '+' :
    z=x+y;
    push(z);
    break;
case '-' :
    z=x-y;
    push(z);
    break;
case '*' :
    z=x*y;
    push(z);
    break;
}
        }
    }


 printf("%d",a[0]);


}

int main()
{
char emp[]={6,4,3,6,'+','-','*'};
n=sizeof(emp);
    ans(emp);
    }
