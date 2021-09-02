#include <iostream> 
/*
함수의 원형을 정의
*/
#include <climits> // <-데이터 타입별 최대 값을 알 수 있다.



using namespace std;
void practice_data_type();
void radius();
void data_exchange();

int main() {
	//practice_data_type();
	//radius();
	data_exchange();
	cout << "Hello, World" << endl;
	return 0;
}


void practice_data_type() {

	int a;
	/*c++ 에서 사용하는 키워드 사용 주의*/
	a = 7;
	int b = 3; /*선언과 동시에 값을 할당을 하는 것을 초기화*/

	cout << a << b << endl;
	// cout << &a << &b << endl; <- c++에서 자료형의 주소값 번지 수를 확인 하는 방법
	/*
	{
		{
			int something;
			{
				int another; 
				something = 3; <-블록에 something 처럼 안에 있으면 변수 선언 가능 ex) something{}
			}
			another = 5; <-블록 밖에 another이 선언이 되면 변수 선언 에러
		}
		
	}*/

	//short, int, long, long long <-정수형 데이타

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;


	cout << "int 바이트 :" << sizeof n_int << endl;
	cout << "이 것의 최대 값" << n_int << endl;

	cout << "short형의 바이트 :" << sizeof n_short << endl;
	cout << "short형의 최대 값 :" << n_short << endl;

	cout << "long형의 바이트 :" << sizeof n_long << endl;
	cout << "long형의  최대 값 :" << n_long << endl;

	cout << "long long 형의 바이트 :" << sizeof n_llong << endl;
	cout << "long long 형의 최대 값 : " <<  n_llong << endl;

}

void radius() {

	const float PIE = 3.1415926535; // <-c++ 에서는 #define으로 정의를 하지 않고 const 로 정의
	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;

}

void data_exchange() {
	//자료형 데이터 변환
	//typeNmae(a)
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; //아스키 코드로 변환이 되어서 출력이 됨 



}

