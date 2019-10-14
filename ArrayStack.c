#include "ArrayStack.h"
#include <stdio.h>


int isEmpty(  ArrayStackNode * const node){
	
	if( node->top == 0 )
		return 1;
	else
		return 0;
}


int isFull(  ArrayStackNode * const node ){
	if( node->top >= node->capicity )
		return 1;
	else
		return 0;
}

int size(  ArrayStackNode * const node ){
	return node->top;
}

int push(  ArrayStackNode  *  const node , int e){
	
	if( isFull( node ) == 1 ){
		
		printf("栈已满，无法压栈！, %i \n:" , e );
		return 0;
	}
	
	node->arr[ node->top] = e;
	node->top ++;
	
	return e;
}

int pop(  ArrayStackNode * const node ){
	
	if( isEmpty( node ) ){
		printf("栈已空，无法出栈！" );
		return 0;
	}
	
	node->top --;
	return node->arr[ node->top];
}
