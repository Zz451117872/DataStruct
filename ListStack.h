typedef struct _ListStackData{
	int data;
	struct _ListStackData * next;
} ListStackData;

typedef struct _ListStackNode{
	ListStackData * top;
	int size;
} ListStackNode ;

int isEmptyByList(  ListStackNode * const node);

int isFullByList(  ListStackNode * const node );

int sizeByList(  ListStackNode * const node );

int pushByList(  ListStackNode *  node , int e);

int popByList(  ListStackNode *  node );

void displayByList( ListStackNode *  node );
