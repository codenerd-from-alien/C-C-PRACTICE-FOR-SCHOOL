#include <iostream> 
/*
�Լ��� ������ ����
*/
#include <climits> // <-������ Ÿ�Ժ� �ִ� ���� �� �� �ִ�.



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
	/*c++ ���� ����ϴ� Ű���� ��� ����*/
	a = 7;
	int b = 3; /*����� ���ÿ� ���� �Ҵ��� �ϴ� ���� �ʱ�ȭ*/

	cout << a << b << endl;
	// cout << &a << &b << endl; <- c++���� �ڷ����� �ּҰ� ���� ���� Ȯ�� �ϴ� ���
	/*
	{
		{
			int something;
			{
				int another; 
				something = 3; <-��Ͽ� something ó�� �ȿ� ������ ���� ���� ���� ex) something{}
			}
			another = 5; <-��� �ۿ� another�� ������ �Ǹ� ���� ���� ����
		}
		
	}*/

	//short, int, long, long long <-������ ����Ÿ

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;


	cout << "int ����Ʈ :" << sizeof n_int << endl;
	cout << "�� ���� �ִ� ��" << n_int << endl;

	cout << "short���� ����Ʈ :" << sizeof n_short << endl;
	cout << "short���� �ִ� �� :" << n_short << endl;

	cout << "long���� ����Ʈ :" << sizeof n_long << endl;
	cout << "long����  �ִ� �� :" << n_long << endl;

	cout << "long long ���� ����Ʈ :" << sizeof n_llong << endl;
	cout << "long long ���� �ִ� �� : " <<  n_llong << endl;

}

void radius() {

	const float PIE = 3.1415926535; // <-c++ ������ #define���� ���Ǹ� ���� �ʰ� const �� ����
	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;

}

void data_exchange() {
	//�ڷ��� ������ ��ȯ
	//typeNmae(a)
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; //�ƽ�Ű �ڵ�� ��ȯ�� �Ǿ ����� �� 



}

