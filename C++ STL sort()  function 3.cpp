#include <iostream> 
#include <algorithm> 
using namespace std ;
class Student{
	public :
		string name ;
		int score ;
		Student(){
			this->name = "" ;
			this->score = 0 ;
		} ; 
		Student(string name, int score){
			this->name = name ;
			this->score = score ;
		}
		bool operator <(Student student) {
			return this->score < student.score ;
		}
};

int main(void) {
	int i ;
	Student students[2];
	for(i = 0 ; i<2 ; i++) {
		cout<<"�̸��� �Է��ϼ���."<<' ';
		cin>>students[i].name ;
		cout<<"������ �Է��ϼ���."<<' ' ;
		cin>>students[i].score ; 
	}
	sort(students, students + 2) ;
	for(i = 0 ; i<2 ; i++) {
		cout<<students[i].name<<' ' ;
	}
}
