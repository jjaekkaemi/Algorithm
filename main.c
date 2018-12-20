#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, min, index, temp, n = 10, x ;
	 int array[10] = {10, 1, 9, 6, 7, 5, 3, 4, 2, 8} ;
	 for(i = 0 ; i < 10 ; i++){
	 	for(j = 0 ; j < 9 - i ; j++){
	 		if(array[j] > array[j+1]){
	 			temp = array[j] ;
	 			array[j] = array[j+1] ;
	 			array[j+1] = temp ;
			 }
		 }
	}
	for(i = 0 ; i<10 ; i++){
		printf("%d", array[i]) ;
	}
}
