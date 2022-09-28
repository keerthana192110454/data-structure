#include <stdio.h>

#include<conio.h>

#define MAX 5

int top, status;
void push (int stack[], int item)

{   if (top == (MAX-1))

status = 0;

    else

    {   status = 1;

++top;

stack [top] = item;

    }

}
//Pop Function Creation
/*POP FUNCTION*/

int pop (int stack[])

{  

int ret;

    if (top == -1)

    {   ret = 0;

status = 0;

    }

    else

    {   status = 1;

ret = stack [top];

--top;

    }

return ret;

}
//Function To Display Stack 
/*FUNCTION TO DISPLAY STACK*/

void display (int stack[])

{   int i;

    printf ("\nThe Stack is: ");

    if (top == -1)

printf ("empty");

    else

    {   for (i=top; i>=0; --i)

  printf ("\n--------\n|%3d   |\n--------",stack[i]);

    }

    printf ("\n");

}
//Stack Push Pop Program in C Source Code
/*MAIN PROGRAM*/

int main()

{  

int stack [MAX], item;

    int ch;
	top = -1;

 

    do

    {  do

       {   printf ("\NMAIN MENU");

  printf ("\n1.PUSH (Insert) in the Stack");

  printf ("\n2.POP  (Delete) from the Stack");

  printf ("\n3.Exit (End the Execution)");

  printf ("\nEnter Your Choice: ");

  scanf  ("%d", &ch);

  if (ch<1 || ch>3)

      printf ("\nInvalid Choice, Please try again");

}while (ch<1 || ch>3);

       switch (ch)

       {case 1:

printf ("\nEnter the Element to be pushed : ");

scanf  ("%d", &item);

printf (" %d", item);

push (stack, item);

if (status)

{   printf ("\nAfter Pushing ");

   display (stack);

   if (top == (MAX-1))

printf ("\nThe Stack is Full");

}

else

   printf ("\nStack overflow on Push");

break;

       case 2:

item = pop (stack);

if (status)

{    printf ("\nThe Popped item is %d.  After Popping: ");

    display (stack);

}

else

    printf ("\nStack underflow on Pop");

break;

       default:

printf ("\nEND OF EXECUTION");

       }

    }while (ch != 3);

getch();

}

