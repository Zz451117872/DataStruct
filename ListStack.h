typedef struct ListStackData{
	int data;
	struct ListStackData * next;
};

typedef struct ListStackNode{
	struct ListStackData * top;
	int size;
} ListStackNode ;

int isEmptyByList(  ListStackNode * const node);

int isFullByList(  ListStackNode * const node );

int sizeByList(  ListStackNode * const node );

ListStackNode * pushByList(  ListStackNode * const node , int e);

int popByList(  ListStackNode * const node );

void displayByList( ListStackNode * const node );
