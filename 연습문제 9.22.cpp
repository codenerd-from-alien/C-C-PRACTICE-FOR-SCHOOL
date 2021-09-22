#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	stringstream ss; // 공백을 지우고 
	string n;
	string input;
	int count = 0;
	getline(cin,input); // c++ <string>라이브러리로 입력 값을 받는다.
	ss.str(input); // 받은 입력 값을 공백 없이 잘라 준다.
	while (ss >> n) //자른 문자열 대로 반목문 돌림 
	{
		//cout << n << endl; //문자열이 잘려서 나오는지 확인
		count++; //공백을 잘라서 나온 단어 나올 때마다 더함
	}
	cout << count << endl;
	return 0;
}

