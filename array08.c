#include<stdio.h>

void abc(int []);

int main()
{
	int i, a[] = {1,2,3};
	
	printf("%x\n", a);
	
	for (i=0; i<3; i++)
		printf("%d\n", a[i]);
	
	abc(a); // a배열의 주소를 전달 
	
	for (i=0; i<3; i++)
		printf("%d\n", a[i]);
	
	
	return 0;
}

//void abc(const int b[]) // 원본 배열의 값을 변경하지 않음 
void abc(int b[]) // 주소를 받음 
{
	printf("%x\n", b);
	
	b[2] = 200; // a배열 주소의 내용을 변환 
}
