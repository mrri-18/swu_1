#include<iostream>
using namespace std;

void total(int* money, int* b) {   //�����͸� �Ű������� ����
	for (int i = 0; i < 4; i++)  // �迭�� �ּҿ� ������ �� �ݺ��ؼ� ���ϱ�
		*money = *(b + i) + *money;

}

void myaccounts(string* a, int* b) {
	std::cout << "*************************SWING �ڻ���� ����*************************" << endl;
	std::cout << "=========================���� �� ��������==============================" << endl;
	for (int i = 0; i < 4; i++) {       //���� �̸��� �����ͷ� �޾ƿ� ���
		std::cout << *(a + i);
	}
	std::cout << " " << endl;
	for (int k = 0; k < 4; k++) {           // �ܾ��� �����ͷ� �޾ƿ� ���
		if (*(b + k) == 0) {            // �ܾ��� 0���̶�� ���¾������� ���
			cout << "���¾��� |";
			continue;
		}
		std::cout << *(b + k);
		cout << "| ";
	}
	cout << " " << endl;
	cout << "=======================================================================" << endl;
}

int main() {
	string bank_name[4] = { "�ϳ� |","�츮 |","����  |","���� |" };        //�迭����
	int bank[4] = { 5000,4000,0,10 };
	int total_money = 0;
	string* p;
	int* q;//�̸��� �ݾ׿� ���� ������ ���� 
	p = &bank_name[0];
	q = &bank[0];
	myaccounts(p, q);
	total(&total_money, q);
	//�����̸�, �ݾ� �迭 ���    
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << "�� �Դϴ�." << endl;   //�� �ݾ� ��� 
	cout << "=======================================================================" << endl;
}