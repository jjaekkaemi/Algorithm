#include <iostream>
#include <algorithm>

using namespace std ;

class Student {
	public :
		string name ;
		int score ;
		Student(string name, int score) {
			this->name = name ;
			this->score = score ;
		}
		// ���� ������ '������ ���� ����'
		bool operator < (Student &student) {
			return this->score < student.score ;
		}
}; 

int main(void) {
	int i ; 
	Student students[] = {
	Student("�����", 100),
	Student("������", 90)} ;
	sort(students, students + 2) ;
	for(i = 0 ; i<2 ; i++) {
		cout<<students[i].name<<" " ;
	}
}

