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

int pushByList(ListStackNode * node , int e){
	
	ListStackData sdata = {e,NULL};
	
	ListStackData * pdata = node->top;
	sdata.next = pdata;
	
	node->top = &sdata;
	node->size ++;
		
	return e;
}

int popByList( ListStackNode * node  ){
	
	if( isEmptyByList( node ) == 1){
		printf("栈已空，无法出栈！" );
		return 0;
	}
	
	ListStackData * data = node->top;
	
	node->top = data->next;
	node->size --;
	
	return data->data;
}

void displayByList( ListStackNode *  node ){
		
	ListStackData * sdata = node->top ;
	
	for( ; sdata != NULL ; sdata = sdata->next){
		printf( " %i \n" , sdata->data );
	}
	
}
