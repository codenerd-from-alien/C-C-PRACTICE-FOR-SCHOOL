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
		int count = 0;//ī��Ʈ ��� ���ֱ� ���ؼ��� ���� ���� �ٵ��� �ٽ� 0���� ���߱� ���ؼ��� �� �ٱ� ���� ���ʿ� �־��
		int cnt_o = 0;//������ �� �� ���� ��ŭ ���� �ٽ� 0���� ���� �� <-�Ǽ� ����
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