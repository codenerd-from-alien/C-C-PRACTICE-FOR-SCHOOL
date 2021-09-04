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
	}//C++에서는 배열의 포인터를 가르켜서  i : (배열의 이름 으로 출력이 가능)

	

}	
void do_while_loop() {
	int j = 0;
	do { //while 문과 차이점은 반복문을 먼저 실행을 한 후  while 문 안의 값이 참인지 확인 후  돌림 
		cout << "while문 입니다\n";
		j++;
	} while (j < 3);
}

void if_and_else() {
	int i = 1;
	int number;
	int chance = 3;
	
	while (i < 4)
	{
		cout << "숫자 맞추기 게임 숫자를 입력을 해주세요!! : " << endl;
		cin >> number;
		std::random_device rd;
		std::mt19937 gen(rd());

		std::uniform_int_distribution<int> dis(0, 5);
		if (number == dis(gen)) {
			cout << "맞추셨습니다." <<endl;
		}
		else {
			cout << "다시 시도 하세요. 남은 찬스는 " << chance - i << "번"<<endl;
		}

		i++;
	}
}




