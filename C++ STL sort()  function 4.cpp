#include <iostream> 
#include <vector>//단순한 배열X, 연결 list 형태로 표현되는 것. 
#include <algorithm> 

using namespace std;

int main(void) {
	vector<pair<int, string> > v; //한 쌍의 데이터를 다루기 위한 라이브러리. int, string 데이터들을 묶어준 것. 먼저 있는 int를 기준으로 배열이 이루어질것.
	v.push_back(pair<int, string>(100, "하재경")) ;//vector의 함수 사용. push_back은 list마지막 부분에 삽입.  
	v.push_back(pair<int, string>(70, "조현일 )
	sort(v.begin(), v.end()) ;//단순 sort는 첫번째 순서인 데이터를 비교하여 정렬.  
	for(int i = 0 ; i<v.size(); i++) {
		cout<<v[i].second << ' ' ;//data는 firtst, second 이렇게 순서인 값을 의미 -> 이름을 가리킴. 
	}

	return 0 ;
}
