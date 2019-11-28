#include<stdio.h>
#define STUDENTS 5

float get_avg(int scr[], int n);

int main()
{
	int i, score[STUDENTS] = {100, 95, 90, 85, 80};
	float avg;
	
	avg = get_avg(score, STUDENTS);
	
	printf("ЦђБе = %.2f", avg);
	
	return 0;
}

float get_avg(int scr[], int n)
{
	int i, sum = 0;
	
	for (i=0; i<n; i++)
		sum += scr[i];
	
	return (float)sum / n;
}
