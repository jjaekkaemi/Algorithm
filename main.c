#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int number = 8 ;
int sorted[8] ; //���� �迭�� �ݵ�� ���� ������ ����. 

void merge(int a[], int m,int middle, int n){
	int i = m ;
	int j = middle + 1 ;
	int k = m ;
	int t ;
	//���� ������� �迭�� ����.
	
	while(i <= middle && j <= n) {
		if(a[i]<=a[j]){
			sorted[k] = a[i] ;
			i++ ;
		} else {
			sorted[k] = a[j] ;
			j++ ;
		}
		k++ ;
	}
	//���� �����͵� ����
	if(i>middle) {
		for(t = j ; t<= n ; t++) {
			sorted[k] = a[t] ;
			k++ ;
		}
	} else {
		for(t = i ; t <= middle ; t++) {
			sorted[k] = a[t] ;
			k++ ;
		}
	}
	//���ĵ� �迭�� ����
	for(t = m ; t<=n ; t++) {
		a[t] = sorted[t] ;
	}  
}

void mergeSort(int a[], int m, int n) {
	//ũ�Ⱑ 1���� ū ���
	if(m < n) {
		int middle = (m+n) /2 ;
		mergeSort(a, m, middle) ;
		mergeSort(a, middle+1, n) ;
		merge(a, m, middle, n) ;
	}
}
int main(int argc, char *argv[]) {
	int i ;
	int array[8] = {2, 3, 5, 4, 6, 1, 8, 7} ;
	mergeSort(array, 0, 7) ;
	for(i = 0; i<number; i++) {
		printf("%d", array[i]) ;
	}
	return 0;
}
