#include <iostream>
#include <random>

using namespace std;
void while_loop();
void do_while_loop();
void if_and_else();

int main() {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << "X" << j << "=" << i * j << endl;
		}
	}
	//while_loop();
	//do_while_loop();
	//if_and_else();
	
	return 0;
}

void while_loop() {
	string name = "Panda";
	string alpha = " ";
	
	/*int i = 0;
	while (name[i] != '\0') {
		//cout << name[i] << endl;
		i++;
	}*/
	int arr[10] = { 1,2,3,4,5 };

	for (int i : arr) {
		cout << i << endl;
	}//C++������ �迭�� �����͸� �����Ѽ�  i : (�迭�� �̸� ���� ����� ����)

	

}	
void do_while_loop() {
	int j = 0;
	do { //while ���� �������� �ݺ����� ���� ������ �� ��  while �� ���� ���� ������ Ȯ�� ��  ���� 
		cout << "while�� �Դϴ�\n";
		j++;
	} while (j < 3);
}

void if_and_else() {
	int i = 1;
	int number;
	int chance = 3;
	
	while (i < 4)
	{
		cout << "���� ���߱� ���� ���ڸ� �Է��� ���ּ���!! : " << endl;
		cin >> number;
		std::random_device rd;
		std::mt19937 gen(rd());

		std::uniform_int_distribution<int> dis(0, 5);
		if (number == dis(gen)) {
			cout << "���߼̽��ϴ�." <<endl;
		}
		else {
			cout << "�ٽ� �õ� �ϼ���. ���� ������ " << chance - i << "��"<<endl;
		}

		i++;
	}
}




