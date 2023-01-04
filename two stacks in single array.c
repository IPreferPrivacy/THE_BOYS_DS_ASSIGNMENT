#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int Stack[MAX];
int top1 = -1;
int top2 = (MAX / 2) - 1;
void Display_Stack1();
void Display_Stack2();

void Push_stack1();
void Push_stack2();

void Pop_stack1();
void Pop_stack2();

void Peek_stack1();
void Peek_stack2();

int main()
{
    int ch;

    do
    {

        printf("***Enter the operation you want to perform***\n\n");
        printf(" For Stack 1 : \n 1.Display \n 2.Push \n 3.Pop \n 4.Peek\n\n");
        printf(" For Stack 2 : \n 5.Display \n 6.Push \n 7.Pop \n 8.Peek");
        printf("\n");
        printf(" 9.EXIT");
        printf("\n\n");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Display_Stack1();
            break;
        case 2:
            Push_stack1();
            break;
        case 3:
            Pop_stack1();
            break;
        case 4:
            Peek_stack1();
            break;
        case 5:
            Display_Stack2();
            break;
        case 6:
            Push_stack2();
            break;
        case 7:
            Pop_stack2();
            break;
        case 8:
            Peek_stack2();
            break;
        case 9:
            break;
        }
        printf("************************");
        printf("\n\n");

    } while (ch != 9);
    return 0;
}
void Display_Stack1()
{
    if (top1 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\nThe elements in stack 1 are : \n");
        for (int i = top1; i >= 0; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}
void Push_stack1()
{
    if (top1 == (MAX / 2) - 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        int item;
        top1 = top1 + 1;
        printf("\nEnter the value you want to push in stack 1:\n");
        scanf("%d", &item);
        Stack[top1] = item;
    }
}
void Pop_stack1()
{
    if (top1 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        int item;
        printf("\n%d is popped\n", Stack[top1]);
        top1 = top1 - 1;
    }
}

void Peek_stack1()
{
    printf("%d is the top element of Stack 1", Stack[top1]);
}

void Display_Stack2()
{
    if (top2 == (MAX / 2) - 1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\nThe elements of stack 2 are \n");
        for (int i = top2; i > (MAX / 2) - 1; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}
void Push_stack2()
{
    if (top2 == MAX - 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        int item;
        top2 = top2 + 1;
        printf("\nEnter the value you want to push in stack 2:\n");
        scanf("%d", &item);
        Stack[top2] = item;
    }
}
void Pop_stack2()
{
    if (top2 == (MAX / 2) - 1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        int item;
        printf("\n%d is popped\n", Stack[top2]);
        top2 = top2 - 1;
    }
}
void Peek_stack2()
{
    printf("%d is the top element of Stack 2", Stack[top2]);
}
