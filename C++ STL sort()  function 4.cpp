#include <iostream> 
#include <vector>//�ܼ��� �迭X, ���� list ���·� ǥ���Ǵ� ��. 
#include <algorithm> 

using namespace std;

int main(void) {
	vector<pair<int, string> > v; //�� ���� �����͸� �ٷ�� ���� ���̺귯��. int, string �����͵��� ������ ��. ���� �ִ� int�� �������� �迭�� �̷������.
	v.push_back(pair<int, string>(100, "�����")) ;//vector�� �Լ� ���. push_back�� list������ �κп� ����.  
	v.push_back(pair<int, string>(70, "������ )
	sort(v.begin(), v.end()) ;//�ܼ� sort�� ù��° ������ �����͸� ���Ͽ� ����.  
	for(int i = 0 ; i<v.size(); i++) {
		cout<<v[i].second << ' ' ;//data�� firtst, second �̷��� ������ ���� �ǹ� -> �̸��� ����Ŵ. 
	}

	return 0 ;
}
