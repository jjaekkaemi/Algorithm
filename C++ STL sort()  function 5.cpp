#include <iostream> 
#include <vector>//단순한 배열X, 연결 list 형태로 표현되는 것. 
#include <algorithm> 

using namespace std;
bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> >b ) {
			 	if(a.second.first == b.second.first) {//점수가 같으면 생년월일이 더 어린 사람을 먼저. 
			 		return a.second.second > b.second.second ;
			 	} else {
			 		return a.second.first > b.second.first ;
				 }
			 }
int main(void) {
	vector<pair<string, pair<int, int> > > v ;
	v.push_back(pair<string, pair<int, int> >("하재경", pair<int, int>(100, 19970901))) ;
	v.push_back(pair<string, pair<int, int> >("히경재", pair<int, int>(100, 19940927))) ;
	v.push_back(pair<string, pair<int, int> >("하째경", pair<int, int>(90, 19970901))) ;
	sort(v.begin(), v.end(), compare) ;
	for(int i = 0 ; i<v.size(); i++) {
		cout<<v[i].first << ' ' ;
	}
	
	return 0 ;
}
