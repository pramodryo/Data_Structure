/* Queue: 
   - Queue is followinf first in first out technique or last in last out
   - if Enqueue (Insertion) happened from one end then Dequeue (deletetion) will happned from another end. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define SIZE 5
int que[SIZE];
int top = -1;

void enqueue();
void dequeue();
void display();


void main()
{
	int op;

	while(1)
	{
		printf("Enter your choice\n");
		printf("1->enqueue\n2->dequeue\n3->display\n4->exit\n");
		scanf("%d", &op);

		switch(op)
		{
			case 1: enqueue(); break;
			case 2: dequeue(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("unkown choice\n");
		}
	}
}//EOM

	void enqueue
()
{
	if(top >= SIZE-1)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		top++;
		printf("Enter your number in queue\n");
		scanf("%d", &que[top]);
	}
}//End of enqueue


void dequeue()
{
	if(top <= -1)
	{
		printf("queue is underflow\n");
		return;
	}
	else
	{
		int i;
		printf("deleted number is = %d\n", que[0]);
		for(i=0;i<top;i++)
		{
			que[i] = que[i+1];
		}
		top--;
	}
}//End of pop

void display()
{
	if(top <= -1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		int i;
		for(i=0; i<=top; i++)
		{
			printf("%d ", que[i]);
		}
		printf("\n");
	}
}//End of Display
