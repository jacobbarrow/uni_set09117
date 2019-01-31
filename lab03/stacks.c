#include <stdio.h>

#define MAX 3

typedef struct
{
	int array[MAX];
	int top_index;
} stack;

void init(stack *s)
{
	s->top_index = -1;
}

void push(stack *s, int value)
{
	if(s->top_index == MAX-1)
	{	
		printf("STACK IS FULL WHAT ARE YOU DOING OH MY GOODNESS\n");
		return;
	}

	s->top_index++;
	s->array[s->top_index] = value;
}

int *pop(stack *s)
{
	int *value;
	if(s->top_index == -1)
	{
		printf("THE STACK'S EMPTY ALL HELL'S BROKEN LOOSE SAVE YOURSELF\n");
		return NULL;
	}

	value = &(s->array[s->top_index]);
	s->top_index--;

	printf("%d\n", *value);	

	return value;
}

int main(int argc, char **argv)
{
	stack s;

	init(&s);

	push(&s, 40);
	push(&s, 11);
	push(&s, 12);
	push(&s, 2);
	
	pop(&s);	
	pop(&s);	
	pop(&s);	
	pop(&s);	



	return 0;
		
}
