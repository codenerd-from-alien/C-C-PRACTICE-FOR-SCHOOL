#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main() {

	int num;
	
	string s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> s;
		int count = 0;//카운트 계산 해주기 위해서는 안의 루프 다돌고 다시 0개로 맞추기 위해서는 맨 바깥 루프 안쪽에 넣어야
		int cnt_o = 0;//갯수를 샐 때 길이 만큼 돌고 다시 0개로 맞춰 줌 <-실수 ㄴㄴ
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				count += 1;
				cnt_o += count;
			}
			else if (s[i] == 'X') {
				count = 0;
			}
		}
		
		cout << cnt_o;
		
		
	}


	return 0;
}