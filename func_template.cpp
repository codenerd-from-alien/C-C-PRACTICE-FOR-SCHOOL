#include <iostream>

using namespace std;

template <class Any>

//Any sum(Any, Any); //매개변수를 int 로도 받을 수 있고 float 이렇게 정의 하지 않고 들어가는 값대로 쓸 수 있음
//example
//template <class Any>
//Any sum(int, Any);
//template <class of> // <=잘못된 예
//of sum(of, of);

int sum(int, int); //over로딩의 예제 리턴형과 매개변수의 변수 타입이 같아야함 아니면 오류
float sum(float, float);


int main() {
	int a = 3;
	int b = 4;
	float c = 3.14;
	float d = 1.592;
	//cout << sum(c, d) << endl; //매개변수의 타입을 정의 하지 않고 값을 넣었을 때
	//cout << sum(a, c) << endl; //매개변수의 다른 타입을 넣었을 때 
	//cout << sum(b, d) << endl; <=오류나옴 다른 자료형은 매개변수 정의시에 변수 타입을 정의 해줘야함
	int num1, num2;
	cout << "두 정수를 입력을 해봅시다\n";
	cin >> num1 >> num2;
	cout << "두 정수의 합은 " << sum(num1, num2) << "입니다.\n";
	cout << "float 형의 두 실수를 입력을 합니다\n";
	float pnt_num1, pnt_num2;
	cin >> pnt_num1 >> pnt_num2;
	cout << "두 실수의 합은 " << sum(pnt_num1, pnt_num2) << "입니다.\n";
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


