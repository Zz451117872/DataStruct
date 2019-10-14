typedef struct {
	int capicity;
	int top;
	int * arr;
} ArrayStackNode ;

int isEmpty(  ArrayStackNode * const node);

int isFull(  ArrayStackNode * const node );

int size(  ArrayStackNode * const node );

int push(  ArrayStackNode * const node , int e);

int pop(  ArrayStackNode * const node );
