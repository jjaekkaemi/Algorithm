#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s ;
	s.push(7) ;
	s.pop() ;
	s.push(4) ;
	s.push(6) ;
	while(!s.empty()) {
		cout<<s.top()<<' ' ;
		s.pop();
	}
	return 0 ;
}
