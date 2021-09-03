#include <iostream>
#include <cstring> // <- c++에서 문자열을 사용하기 위해서 cstring
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

// 문자열 사용 방식은 c언어와 비슷하고 string형을 사용해서 사용가능
void another_way_to_use_string();
void learn_struct();
void pointer();
void dynamic_struct();
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
	//pointer();
	dynamic_struct();
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
	const int SIZE = 20;
	char animal[SIZE];
	char* ps;

	cout << "동물 이름 입력:\n";
	cin >> animal;
	/*동적 구조체*/
	ps = new char[strlen(animal) + 1]; //입력한 문자 길이의 배열에서 +1한 값 만큼 입력이 가능 하도록 함 
	strcpy(ps, animal);

	cout << "입력한 동물의 이름" << animal << "주소는 " << (int*)animal << "입니다." << endl;
	cout << "복사된 동물의 이름은" << ps << "주소는 " << (int*)ps << "입니다." << endl;
	

}

//구조체를 선언

struct MyStruct {
	char name[20];
	int age;
};
void dynamic_struct() {
	MyStruct* temp = new MyStruct;
	cout << "당신의 이름을 입력하세요.\n";
	cin >> temp->name;
	cout << "당신의 나이를 입력하십시오.\n";
	cin >> temp->age;
	cout << "안녕하세요!" << temp->name << "\n";
	cout << "당신은" << temp ->age << "살 정보확인\n";
	delete temp;
}



