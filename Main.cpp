#include <iostream>
#include <algorithm>

using namespace std ;

bool compare(int a, int b) {
 	return a > b ; // 될 때 출력이 될 수 있도록. 
 }
int main(void) {
	int i ;
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2} ;
	sort(a, a + 10, compare) ; //정렬할 기준을 우리 마음대로 정렬할 수 있다는 것. 
	for(i = 0 ; i< 10; i++) {
		cout<<a[i]<<' ' ;
	}
}
