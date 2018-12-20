#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int number = 10 ;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9} ;

void quickSort(int *data, int start, int end) {
	if(start >= end) { // ���Ұ� 1���� ��� 
		return ;  
	}
	
	int key = start ; //Ű�� ù��° ���� 
	int i = start + 1 ;
	int j = end ;
	int temp ;
	
	while(i <= j) { // �������� ���� �ݺ� 
		while(data[i]<= data[key] && i<=end) { //Ű ������ ū ���� ã�� �� ����  
			i++ ;
		} 
		while(data[j]>= data[key] && j > start) { // Ű ������ ���� ���� ã�� �� �� 
			j-- ;
		}
		if(i>j) {//�������� �ȴٸ� ���� ���� start���� �ڸ��� ��ȯ. 
			temp = data[j] ;
			data[j] = data[key] ;
			data[key] = temp ;
		}
		else {//�������� ������ ���ذ��� ���� ���� ���� ū ���� �ڸ� ��ȯ. 
			temp = data[j] ;
			data[j] = data[i] ;
			data[i] = temp ;
		}
	}
	quickSort(data, start, j-1 ) ;
	quickSort(data, j+1, end) ;
}
int main(int argc, char *argv[]) {
	int i ;
	quickSort(data, 0, number-1) ;
	for(i = 0 ; i<number ; i++){
		printf("%d", data[i]) ;
	}
	return 0;
}
