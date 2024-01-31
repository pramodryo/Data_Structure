/* STACK: 
-Insertion and deletetion takes place from one end only.
-add and delete from middle or last position is not possible. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define SIZE 5
int stk[SIZE];
int top = -1;

void push();
void pop();
void display();


void main()
{
	int op;

	while(1)
	{
		printf("Enter your choice\n");
		printf("1->push\n2->pop\n3->display\n4->exit\n");
		scanf("%d", &op);

		switch(op)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("unkown choice\n");
		}
	}
}//EOM

void push()
{
	if(top >= SIZE-1)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
		top++;
		printf("Enter your data\n");
		scanf("%d", &stk[top]);
	}
}//End of push


void pop()
{
	if(top <= -1)
	{
		printf("stack is underflow\n");
		return;
	}
	else
	{
		printf("deleted number is = %d\n", stk[top]);
		top--;
	}
}//End of pop

void display()
{
	if(top <= -1)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
		int i;
		for(i=0; i<=top; i++)
		{
			printf("%d ", stk[i]);
		}
		printf("\n");
	}
}//End of Display
