#include <iostream> 
#include <vector>//�ܼ��� �迭X, ���� list ���·� ǥ���Ǵ� ��. 
#include <algorithm> 

using namespace std;
bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> >b ) {
			 	if(a.second.first == b.second.first) {//������ ������ ��������� �� � ����� ����. 
			 		return a.second.second > b.second.second ;
			 	} else {
			 		return a.second.first > b.second.first ;
				 }
			 }
int main(void) {
	vector<pair<string, pair<int, int> > > v ;
	v.push_back(pair<string, pair<int, int> >("�����", pair<int, int>(100, 19970901))) ;
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(100, 19940927))) ;
	v.push_back(pair<string, pair<int, int> >("��°��", pair<int, int>(90, 19970901))) ;
	sort(v.begin(), v.end(), compare) ;
	for(int i = 0 ; i<v.size(); i++) {
		cout<<v[i].first << ' ' ;
	}
	
	return 0 ;
}
