#include <stdio.h>
#include <stdlib.h>

#include "ArrayStack.h"
#include "ListStack.h"

const int default_capicity = 10;

int main(int argc, char *argv[]) {
	
	
	
//	ArrayStackNode node;
//	node.capicity = default_capicity;
//	node.top = 0;
//	
//	int arr[default_capicity];
//	node.arr = arr;
//	
//	int empty = isEmpty( &node );
//	
//	printf( "ջ�Ƿ�Ϊ�գ�%i \n", empty);
//	
//	int index;
//	for( index = 0 ; index < 11; index ++ ){
//		
//		push( &node , index );
//	
//		printf( "ջ��Ԫ��������%i \n", size( &node ));
//	}
//	
//	for( index = 0 ; index < 11; index ++ ){
//		
//		int e = pop( &node);
//	
//		printf( "��ջԪ��%i \n", e );
//	}
		
				
	ListStackNode node;
	node.top = NULL;
	node.size = 0;
	
	pushByList( &node , 3 );
	pushByList( &node , 4 );
	pushByList( &node , 5 );
	
	displayByList( &node );
	
//	int index;
//	for( index = 0 ; index < 1; index ++ ){
//		
//		pushByList( &node , 1 );
//	
//		printf( "ջ��Ԫ��������%i \n", sizeByList( &node ));
//		
//		displayByList( &node );
//	}
//	
//	for( index = 0 ; index < 1; index ++ ){
//		
//		int e = popByList( &node);
//	
//		printf( "��ջԪ��%i \n", e );
//		printf( "ջ��Ԫ��������%i \n", sizeByList( &node ));
//	}
	
		
	return 0;
}
