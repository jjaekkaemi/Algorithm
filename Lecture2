#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, min, index, temp ;
	 int array[10] = {10, 1, 9, 6, 7, 5, 3, 4, 2, 8} ;
	 for(i = 0 ; i < 10 ; i++){
	 	min = array[i] ;
	 	for(j = i ; j<10; j++){
	 		if(min>array[j]){
	 			min = array[j] ;
	 			index = j ;
			 }
		}
			 temp = array[i] ;
			 array[i] = array[index];
			 array[index] = temp ; 	
	}
	for(i = 0 ; i<10 ; i++){
		printf("%d", array[i]) ;
	}
}
