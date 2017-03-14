/* Implement Stack
 * Perform PUSH(insert operation),
POP(Delete operation) and Display stack */

#include <stdio.h>
#include <conio.h>
#define MAX 3

/* Structure definition for stack */
struct stack
{
 int stk[MAX];
 int top;
};
typedef struct stack STACK;
STACK s;

/* Function declaration/Prototype*/
void push (void);
int pop(void);
void display (void);

void main ()
{
 int choice;
 clrscr ();
 s.top = -1;
 printf ("STACK OPERATIONS:\n");
 while (1)
 {
  printf (" 1 --> PUSH \n");
  printf (" 2 --> POP \n");
  printf (" 3 --> DISPLAY \n");
  printf (" 4 --> EXIT \n");
  printf ("Enter your choice:");
  scanf ("%d", &choice);

  switch (choice)
  {
   case 1: push();
	   break;
   case 2: pop();
	   break;
   case 3: display();
	   break;
   case 4: exit(1);
   default: printf("Invalid choice\n");
  }

  fflush (stdin);

  }
}

/*Add an element to the stack*/
void push ()
{
 int num;
 if(s.top==(MAX-1))
 {
  printf("Stack is Full\n");
  return;
 }
 else
 {
  printf ("Enter the element to be pushed:");
  scanf ("%d", &num);
  s.top=s.top+1;
  s.stk[s.top]=num;
 }
 return;
}

/*Delete an element from the stack*/
int pop ()
{
 int num;
 if (s.top==-1)
 {
  printf ("Stack is Empty\n");
  return (s.top);
 }
 else
 {
  num=s.stk[s.top];
  printf ("Popped element is = %d\n", s.stk[s.top]);
  s.top = s.top - 1;
 }
 return(num);
}

/*Function to display the status of the stack*/
void display ()
{
 int i;
 if(s.top==-1)
 {
  printf("Stack is empty\n");
  return;
 }
 else
 {
 printf("\nStack Elements are:\n");
 for(i=s.top;i>=0;i--)
 {
  printf ("%d\t", s.stk[i]);
 }
}
printf("\n");
}
