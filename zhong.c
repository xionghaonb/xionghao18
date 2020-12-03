# xionghao18-a1921
typedef struct node {

  int data;
 
 struct node *pNext;
 
 } NODE,*PNODE;
 
 typedef struct stack {
 
  PNODE Top;//指向栈顶的指针

  PNODE Bottom;//指向栈底的指针

 } STACK,*PSTACK;

 void initStack(PSTACK pS) {

  PNODE pN;

  pS->Top=(PNODE)malloc(sizeof(NODE));

  pS->Bottom=pS->Top;

  pN=pS->Top;

  pN->pNext=NULL;

  printf("Initation successfully!\n");

 }

 void pushStack(PSTACK pS) {

  PNODE pN;
  
  int val;

  pN=(PNODE)malloc(sizeof(NODE));
  
  pN->pNext=pS->Top;

  pS->Top=pN;

  printf("please enter the data:");

  scanf("%d",&val);

  pS->Top->data=val;
  
  printf("Push successfully!\n");

 }

 void popStack(PSTACK pS) {

  PNODE pN;

  int val;

  val=pS->Top->data;

  printf("The data coming out of the stack is %d\n",val);

  pN=pS->Top;

  pS->Top=pS->Top->pNext;

  free(pN);

 }

 void traversalStack(PSTACK pS) {

  PNODE pN;

  pN=pS->Top;
  
  while((pN->pNext)!=NULL) {

  printf("%d",pN->data);

  pN=pN->pNext;

  }

 }
