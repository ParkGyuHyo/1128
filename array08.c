#include<stdio.h>

void abc(int []);

int main()
{
	int i, a[] = {1,2,3};
	
	printf("%x\n", a);
	
	for (i=0; i<3; i++)
		printf("%d\n", a[i]);
	
	abc(a); // a�迭�� �ּҸ� ���� 
	
	for (i=0; i<3; i++)
		printf("%d\n", a[i]);
	
	
	return 0;
}

//void abc(const int b[]) // ���� �迭�� ���� �������� ���� 
void abc(int b[]) // �ּҸ� ���� 
{
	printf("%x\n", b);
	
	b[2] = 200; // a�迭 �ּ��� ������ ��ȯ 
}
