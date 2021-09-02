#include <iostream>
#include <cstring> // <- c++에서 문자열을 사용하기 위해서 cstring
using namespace std;

// 문자열 사용 방식은 c언어와 비슷하고 string형을 사용해서 사용가능
void another_way_to_use_string();
void learn_struct();
void pointer();

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "신나는 C++코딩";

	cout << "새로 배우는" << name2;
	cout << "이 다음으로 배울 과목이??\n";

	//cin >> name1; <- c++에서 입력을 하는 방법 이렇게 하면 배열크기 만큼 이력이 안됨
	cin.get(name1, Size); //변수의 성함과 배열 자체의 크기를 알려줘야함
	
	cout << "이 다음으로 배울 과목은" << " " << name1 << "입니다.\n";

	cout << strlen(name1) << "<-name1 의 글자수를 표현 방법";
	cout << sizeof(name1) << "바이트 크기 알려줌 \n";

	cout << name2 << endl;
	cout << " " << endl;
	//another_way_to_use_string(); 
	
	//learn_struct();
}

void another_way_to_use_string() {
	string str1;
	string str2 = "meyong jin kim";
	str1 = str2;
	cout << str2 << endl;
	cout << str1 << endl;



}
//C++는 사용자 입맛대로 자료형 정의 가능 
void learn_struct() {
	struct Mystruct
	{
		string name;
		string position;
		int height;
		int weight;
	}; //ex) }b; <-struct naming

	Mystruct  A = {
		"Son",
		"Winger",
		180,
		77
	};
	/*cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;*/

	/*B = {

	};
	cout << B.height << endl;*/

	Mystruct arr_of_struct[2] = {
		{"A", "A", 1, 1},

		{"B", "B", 2, 2}

	};
	
	cout << arr_of_struct[0].height << endl;

}

void pointer() {

}



