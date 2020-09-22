#include <stdio.h>
#include "adjacency.h"

/*This function fill the matrix*/
void fillmat (adjmat m){

int i,j;

printf("The matrix size is: %d x %d, please fill it in Line:\n",N,N);

for (i=0;i<N;i++){
	for (j=0;j<N;j++){
	scanf("%d",&m[i][j]);
	}
}
}

/*This function print the matrix*/
void printmat (adjmat m){

int i,j;

printf("The matrix is:\n");

for (i=0;i<N;i++){
	for (j=0;j<N;j++){
	printf("%d\t",m[i][j]);
	}
printf("\n");
}
}

/*This function check if node u is an ancestor or father of node v and return the define: TRUE or FALSE*/
int path (adjmat m, int u, int v){
int i;

if (u>=N || u<-1 || v>=N || v<-1 || (u==-1 && v!=-1) || (v==-1 && u!=-1)){ /*Checks whether the nodes exceed the array or incorrect values*/
	return FALSE;
}

if (u==v){ /*Checks whether these are the same nodes*/
	return TRUE;
}

if (m[u][v]==1){ /*Checking if u is father of v*/
	return TRUE;
}

for (i=0;i<N;i++){ /*The loop checking if u is an ancestor of v*/

	if (m[i][v]==1){

		if (i==u){
			return TRUE;
		}
		v=i;
		i=-1;
	}
	

}
return FALSE;
}






