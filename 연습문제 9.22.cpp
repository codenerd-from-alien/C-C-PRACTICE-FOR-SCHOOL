#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	stringstream ss; // ������ ����� 
	string n;
	string input;
	int count = 0;
	getline(cin,input); // c++ <string>���̺귯���� �Է� ���� �޴´�.
	ss.str(input); // ���� �Է� ���� ���� ���� �߶� �ش�.
	while (ss >> n) //�ڸ� ���ڿ� ��� �ݸ� ���� 
	{
		//cout << n << endl; //���ڿ��� �߷��� �������� Ȯ��
		count++; //������ �߶� ���� �ܾ� ���� ������ ����
	}
	cout << count << endl;
	return 0;
}

