#include <iostream>

using namespace std;

template <class Any>

//Any sum(Any, Any); //�Ű������� int �ε� ���� �� �ְ� float �̷��� ���� ���� �ʰ� ���� ����� �� �� ����
//example
//template <class Any>
//Any sum(int, Any);
//template <class of> // <=�߸��� ��
//of sum(of, of);

int sum(int, int); //over�ε��� ���� �������� �Ű������� ���� Ÿ���� ���ƾ��� �ƴϸ� ����
float sum(float, float);


int main() {
	int a = 3;
	int b = 4;
	float c = 3.14;
	float d = 1.592;
	//cout << sum(c, d) << endl; //�Ű������� Ÿ���� ���� ���� �ʰ� ���� �־��� ��
	//cout << sum(a, c) << endl; //�Ű������� �ٸ� Ÿ���� �־��� �� 
	//cout << sum(b, d) << endl; <=�������� �ٸ� �ڷ����� �Ű����� ���ǽÿ� ���� Ÿ���� ���� �������
	int num1, num2;
	cout << "�� ������ �Է��� �غ��ô�\n";
	cin >> num1 >> num2;
	cout << "�� ������ ���� " << sum(num1, num2) << "�Դϴ�.\n";
	cout << "float ���� �� �Ǽ��� �Է��� �մϴ�\n";
	float pnt_num1, pnt_num2;
	cin >> pnt_num1 >> pnt_num2;
	cout << "�� �Ǽ��� ���� " << sum(pnt_num1, pnt_num2) << "�Դϴ�.\n";
	return 0;
}


/*template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}
template <class Any>
Any sum(int a, Any b) {
	return a + b;
}
template <class of>
of sum(of a, of b) {
	return a + b;
}*/

int sum(int num1, int num2) {
	return num1 + num2;
}

float sum(float pnt_num1, float pnt_num2) {
	return pnt_num1 + pnt_num2;
}


