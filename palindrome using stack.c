#include<stdio.h>
#include<stdlib.h>
int i,count,ele,temp,rev;
int stack[10],top=-1;;
int push()
{
    printf("\nEnter Number of Element to push:");
    scanf("%d",&count);
    printf("\nEnter element to push :") ;
    for(i=0; i<count; i++)
    {
        scanf("%d",&ele);
        top++;
        stack[i]=ele;
        temp=stack[i];
    }
}
int pop()
{
    for(i=top; i>=0; i--)
    {

        printf("%d\n",stack[i]);
        rev=stack[i];
    }

}
int checkPalindrome()
{
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Check Palindrome Or Not");
        printf("\n 0.Exit");
        printf("\n Enter Your Choice:");
        scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        checkPalindrome();
        break;

    }
    }
    while(choice!=0);
    return 0;
}







