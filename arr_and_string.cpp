#include <iostream>
#include <cstring> // <- c++���� ���ڿ��� ����ϱ� ���ؼ� cstring
using namespace std;

// ���ڿ� ��� ����� c���� ����ϰ� string���� ����ؼ� ��밡��
void another_way_to_use_string();
void learn_struct();
void pointer();

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "�ų��� C++�ڵ�";

	cout << "���� ����" << name2;
	cout << "�� �������� ��� ������??\n";

	//cin >> name1; <- c++���� �Է��� �ϴ� ��� �̷��� �ϸ� �迭ũ�� ��ŭ �̷��� �ȵ�
	cin.get(name1, Size); //������ ���԰� �迭 ��ü�� ũ�⸦ �˷������
	
	cout << "�� �������� ��� ������" << " " << name1 << "�Դϴ�.\n";

	cout << strlen(name1) << "<-name1 �� ���ڼ��� ǥ�� ���";
	cout << sizeof(name1) << "����Ʈ ũ�� �˷��� \n";

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
//C++�� ����� �Ը���� �ڷ��� ���� ���� 
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



