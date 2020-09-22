#define N 11 /*Represents the size of the matrix*/
#define TRUE 1
#define FALSE 0

typedef int adjmat [N][N];

/*Declare the fuctions*/

void fillmat (adjmat);
void printmat (adjmat);
int path (adjmat,int,int);
