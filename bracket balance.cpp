#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	char data;
	struct node* link;
};

struct node* top = NULL;

void push(char *argv[]){
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = **argv;
	temp->link = top;
	top = temp;
}

void pop(){
	struct node* temp;
	if(top == NULL){
		return;
	}
	temp = top;
	top = top->link;
	free(temp);
}

int isempty(){
	
	if(top == NULL){
		return true;
	}
	else{
	}
}

void peek(){
	if(top == NULL){
		printf("\n The stack is empty");
		return;
	}
		printf("\nFirst element on stack is :%d",top->data);
	}
	
int paired( char *argv[]){
	int i;
	if(strcmp(argv[i] , "(") == 0 && strcmp(argv[i] , ")") == 0){
		return true;
		}
		else if	(strcmp(argv[i] , "{") == 0 && strcmp(argv[i] , "}") == 0){
			return true;
		}
		else if	(strcmp(argv[i] , "[") == 0 && strcmp(argv[i] , "]") == 0){
		
		return true;
	}
	else{
		return false;
	}
}


int analyze(int argc, char *argv[]){
	int i,j;
	printf( "argc = %d\n", argc );
		for(j=0;j< argc;j++){
		 printf( "argv[ %d ] = %s\n", j, argv[ j ] );}
	for(i=0;i< argc;i++){
		 printf( "argv[ %d ] = %s\n", i, argv[ i ] );
		if(strcmp(argv[i] , "(") == 0 || strcmp(argv[i] , "{") == 0 || strcmp(argv[i] , "[") == 0){
			push(argv);
			
		}
		else if(strcmp(argv[i] , ")") == 0 || strcmp(argv[i] , "}") == 0 || strcmp(argv[i] , "]") == 0){
			{
				if(paired(argv) ){
					
			     printf("Not balanced at position %d and bracket %c",i+1,argv[i]);
                
				} 
				else{
			pop();
		}
		}
		printf("%s",top->data);
	}
	
	
	
	
}}


int main( int argc, char *argv[] ){
	analyze(argc,argv);
}





