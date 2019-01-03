#include <stdio.h> 

int number = 5 ;
int count[5] ;
int array[20] = {4,4,4,4,
				 5,5,5,5,
				 3,3,3,3,
				 2,2,2,2,
				 1,1,1,1} ;

void counting(int a[], int n) {
	int i ;
	int j ;
	int m = 1;
	for(i = 0 ;i <n ; i++){
		count[i] = 0 ;
	}
	for(i = 0 ; i<20 ; i++) {
		count[array[i]-1]++ ;
	}
	for(i = 0 ; i<5; i++) {
		if(count[i]!= 0) {
			for(j = 0 ; j<count[i] ; j++){
				printf("%d", i+1) ;
			}
		}
	}
}

int main(void) {
	counting(array, number) ;
}
