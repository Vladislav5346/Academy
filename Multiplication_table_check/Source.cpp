#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int num1, num2, num3, res, level, q, count, o;
	bool a = true;
	do {
		count = 0;
		cout << "�������� ������� ���������:\n" <<
			"1 - ����� � ��������� �� 1 �� 10. 5 ��������.\n" <<
			"2 - ����� � ��������� �� 1 �� 100. 10 ��������.\n";
		cin >> level;
		if (level < 1 || level > 2) {
			cout << "������. ��������� ����\n";
			continue;
		}
		else if (level == 1) q = 5;
		else q = 10;
		for (int i = 1; i <= q; i++) {
			if (level == 1) {
				num1 = rand() % 10 + 1;
				num2 = rand() % 10 + 1;
			}
			else {
				num1 = rand() % 100 + 1;
				num2 = rand() % 100 + 1;
			}
			res = num1 * num2;
			cout << num1 << " * " << num2 << " = ";
			cin >> num3;
			if (res == num3) {
				cout << "�����!\n";
				count++;
			}
			else cout << "�������!\n";
		}
		if (level == 1) {
			switch (count)
			{
			case 3:
				o = 3;
				break;
			case 4:
				o = 4;
				break;
			case 5:
				o = 5;
				break;
			default:
				o = 2;
				break;
			}
		}
		else {
			switch (count)
			{
			case 5:
			case 6:
			case 7:
				o = 3;
				break;
			case 8:
			case 9:
				o = 4;
				break;
			case 10:
				o = 5;
				break;
			default:
				o = 2;
				break;
			}
		}
		cout << "���� ������: " << o <<
			"\n������ ������ ���� ��� ��� (1 - ��, 0 - ���)?\n";
		cin >> a;
	} while (a);

	return 0;
}