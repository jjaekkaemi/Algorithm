#include <stdio.h>

int number = 9 ;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 2} ;

int main(void) {
	int i ; 
	int temp ;
	int root ;
	for(i = 1 ; i<number ; i++) {
		int c = i ;
		do {
			root = (c - 1)/2 ;
			if(heap[root]<heap[c]) {
				temp = heap[root] ;
				heap[root] = heap[c] ;
				heap[c] = temp ;
			}	
			c = root ;
		} while(c != 0) ;
	}
	//크기를 줄여가며 반복적으로 힙을 구성.  
	for(i = number - 1 ; i >= 0 ; i--) {
		temp = heap[i] ;
		heap[i] = heap[0] ;
		heap[0] = temp ;
		int root = 0 ;
		int c = 1 ;
		do {
			c = 2 * root + 1 ;
			if(heap[c] < heap[c+1] && c<i-1){
				c++ ;
			}
			if(heap[c]>heap[root] && c<i) {
				temp = heap[c] ;
				heap[c] = heap[root] ;
				heap[root] = temp ;
			}
			root = c ;
		} while(c<i) ;
	}
	for(i = 0 ; i<number ; i++){
		printf("%d", heap[i]) ;
	}
}
