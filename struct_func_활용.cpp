#include <iostream>

using namespace std;

struct Time {
	int hours;
	int mins;
};

const int minPerHour = 60;

Time sum(Time*, Time*); // ����ü�� Ȱ���ؼ� Time �Ű������� �ּ� ���� ������ �ؼ� �Ű����� ��� ���
void showTime(Time);

int main() {
	Time day1 = { 5,45 }; // Time ����ü�ȿ� �ð��� ���� �־��� 
	Time day2 = { 4, 55 }; // Time ����ü�ȿ� �ð��� ���� �־��� 
	Time total = sum(&day1, &day2);

	cout << "��Ʋ�� �ҿ� �ð� : ";
	showTime(total);

	return 0;
}
Time sum(Time* t1, Time* t2) {
	Time total;

	total.mins = (t1->mins + t2->mins) % minPerHour;
	total.hours = t1->hours + t2->hours +
		(t1->mins + t2->mins) / minPerHour;

	return total;
}

void showTime(Time t1) {
	cout << t1.hours << "�ð�, " << t1.mins << "�� �Դϴ�." << endl;
}

