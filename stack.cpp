#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop();
	s.push(6);
	s.pop();
	// 남아있는 데이터 출력하기 
	while(!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}
	return 0;
}
