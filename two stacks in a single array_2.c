/*

    ██████████▄▄   ▄▄▄ ,▄▄;_  __
     .`███▀▀▀██▌   ███ ▐███▀████H
      J███   ████████▌ ████▄▄▄▄▄
      J██▌  ▓██▀└╙▀██▌ ███▀▀▀▀▀█
      ▐▀█▌,,███__ ▐██▌ █▄█████▓▄    _______    ╓▄▄▄▄▄╓      ,,▄▄▄▄▄_  __,╓▄,;__
         █▌██████████▄▄▄▄▄▀╙▀▀▀▀▄▄███████████▄▄╙███████    ,█████████████████████▄
         ▄██████████████████µ ▄██████▀▀█████████▀██████▌  ,████████████████████████µ
         ██████▀     ²██████h▄██████▀└   *▄▄▄▐▀▀▀╜███████▄██████████████▄_  ▀▀╙└└`└
         ██████████████████▀ ██████▌      ▐██████▄`█████████████ ███████████████▄▄
         ███████████████████▄██████_       ██████▌  ███████████   ▀████████████████▄
         ▀█████▀▀▀▀▀▀▀▀████▀▀▌███▀└       ▐██████H   ▐███████▀        `▀▀▀▀▀████████
         ▐█████▄▄▄▄▄▄▄▄███████████▓▄▄µ__¿▄███████     █████▀█   '██████▄_  _▄███████
         ═▀█████████████████▌ ▀█████████████████"     ▐█████▌    ╘█████████████████▀
         ▓████████████████▀└    └▀██████████▀▀        ▐▀████▄     `▀███▀█████▀█▀▀▀
    
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Stack[MAX];
int top1 = -1;
int top2 = MAX;

void printing_whole_array();

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
        printf("\n0.Print Whole Array");
        printf("\n1.Display Stack 1\n2.Push Stack 1\n3.Pop Stack 1\n4.Peek Stack 1\n\n\n5.Display Stack 2\n");
        printf("6.Push Stack 2\n7.Pop Stack 2\n8.Peek Stack 2\n9.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printing_whole_array();
            break;
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
        }

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
        printf("\nThe elements are \n");
        for (int i = top1; i >= 0; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}

void Push_stack1()
{
    if (top1 == top2 - 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        int item;
        top1 = top1 + 1;
        printf("\nEnter the item you want:\n");
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
        printf("\n%d is deleted\n", Stack[top1]);
        top1 = top1 - 1;
    }
}

void Peek_stack1()
{
    if (top1 == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d is the top element of Stack 2", Stack[top1]);
    }
}

void Display_Stack2()
{
    if (top2 == MAX)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\nThe elements are \n");
        for (int i = MAX - 1; i >= top2; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}

void Push_stack2()
{
    if (top2 == top1 + 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        int item;
        top2 = top2 - 1;
        printf("\nEnter the item you want:\n");
        scanf("%d", &item);
        Stack[top2] = item;
    }
}

void Pop_stack2()
{
    if (top2 == MAX)
    { // change
        printf("\nUnderflow\n");
    }
    else
    {
        int item;
        printf("\n%d is deleted\n", Stack[top2]);
        top2 = top2 + 1;
    }
}

void Peek_stack2()
{
    if (top2 == MAX)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d is the top element of Stack 2", Stack[top2]);
    }
}

void printing_whole_array()
{
    for (int i = 0; i < MAX; i++)
    {
        if (i >= 0 && i <= top1)
        {
            printf("%d      ", Stack[i]);
        }
        else if (i >= top2 && i < MAX)
        {
            printf("%d      ", Stack[i]);
        }
        else
        {
            printf("None    ");
        }
    }
}