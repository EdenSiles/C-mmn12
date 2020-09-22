#include <stdio.h>
#include "adjacency.h"

int main (){

int u,v;

adjmat matrix;

int res=0; /*Get the resuls of path function*/

fillmat (matrix);
printmat (matrix);

printf("please enter u and v nodes:\n");

while(scanf("%d %d",&u,&v) != EOF){ /*The purpose of the loop is to get values until EOF or -1 -1, use path function and print message accordingly*/

	if(u==-1 && v==-1){ 
	break;
	}

	res=path (matrix,u,v);

	if (res==TRUE){
	printf("u=%d is an ancestor of v=%d\n",u,v);
	}

	else{
	printf("u=%d is NOT an ancestor of v=%d\n",u,v);	
	}
}

return 0;
}


