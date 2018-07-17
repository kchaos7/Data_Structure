#include <stdio.h>

#pragma warning( disable : 4996 )

void MultiTbl();
void MultiTblDan(int nDan);
void MultiTblRow(int nDan, int nRow);

void main()
{
	// 아래의 함수들을 사용하여 구구단을 출력하라.
	MultiTbl();
	MultiTblDan(2);
	MultiTblRow(7,2);
}

void MultiTbl()
{
	// 2단부터 9단까지 구구단을 출력한다.2~5단, 6~9단 나눠서 한 화면에 나오게 한다.
	printf("===========MutiTbl() Function Start==========\n");
	printf("// 2단부터 9단까지 구구단을 출력한다.\n"); 
	for(int i = 2; i < 10; i+=4) {
		for(int j = 2; j < 10; j++) {
			printf("%d * %d = %2d	%d * %d = %2d	%d * %d = %2d	%d * %d = %2d\n", i, j, (i * j), i+1, j, (i+1) * j, i+2, j, (i+2) * j, i+3, j, (i+3) * j);
		}
		putchar('\n');
	}
	printf("\n\n");
}

void MultiTblDan(int nDan)
{
	printf("===========MutiTblDan(int nDan) Function Start==========\n");
	printf("// 구구단의 한 단(nDan)을 출력한다.\n");
	for(int i = 2; i < 10; i++) {
		printf("%d * %d = %2d\n", nDan, i, (nDan * i));
	}
	printf("\n\n");
}

void MultiTblRow(int nDan, int nRow)
{
	printf("===========MutiTblRow(int nDan, int nRow) Function Start==========\n");
	printf("// 구구단의 한 행(nDan의 nRow행)을 출력한다.\n");
	printf("%d * %d = %2d\n", nDan, nRow, (nDan * nRow));
	printf("\n\n");
}