#include "ListStack.h"
#include <stdio.h>


int isEmptyByList(  ListStackNode * const node){
	
	if( node->top == NULL )
		return 1;
	else
		return 0;
}


int isFullByList(  ListStackNode * const node ){
	return 0;
}

int sizeByList(  ListStackNode * const node ){
	return node->size;
}

ListStackNode * pushByList(  ListStackNode  *  const node , int e){
	
	struct ListStackData data = {e,NULL};
	
	printf( "%d , %p \n", data.data , data.next );
	
	printf( "node 的地址 为：%p \n",  node);
	
	if( node->top != NULL){
		
		printf( "++++" );
		data.next = node->top;
	}
	
	
	printf( "%d , %p \n", data.data , data.next );
	
	 
	printf( "%p , %d \n", node->top , node->size );
	
	node->top = &data;
	node->size ++;
		
	printf( "%p  \n", &data );	
	printf( "%p , %d \n", node->top , node->size );	
	printf( "%d , %p \n", data.data , data.next );
	
	printf( "node 的地址 为：%p \n",  node);
	displayByList( node );
	return node;
}

int popByList(  ListStackNode * const node ){
	
	if( isEmptyByList( node ) == 1){
		printf("栈已空，无法出栈！" );
		return 0;
	}
	
	struct ListStackData * data = node->top;
	
	node->top = data->next;
	node->size --;
	
	return data->data;
}

void displayByList( ListStackNode * const node ){
	
	printf("-----------------\n");
	printf( "node 的地址 为：%p \n",  node);
	printf( "%d , %p \n", node->size , node->top );
	
	struct ListStackData * data =  node->top ;
	
	printf( "%d , %p \n", data->data , data->next );
	printf("%p \n", data);
	printf( " %i \n" , data->data);
	printf( " %p \n" , data->next);
		
//	while( data != NULL ){
//		
//		printf("%p \n", data);
//		printf( " %i \n" , data->data);
//		
//		data = data->next;
//	}
}
