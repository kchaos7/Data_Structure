#include <stdio.h>

#pragma warning( disable : 4996 )

void MultiTbl();
void MultiTblDan(int nDan);
void MultiTblRow(int nDan, int nRow);

void main()
{
	// �Ʒ��� �Լ����� ����Ͽ� �������� ����϶�.
	MultiTbl();
	MultiTblDan(2);
	MultiTblRow(7,2);
}

void MultiTbl()
{
	// 2�ܺ��� 9�ܱ��� �������� ����Ѵ�.2~5��, 6~9�� ������ �� ȭ�鿡 ������ �Ѵ�.
	printf("===========MutiTbl() Function Start==========\n");
	printf("// 2�ܺ��� 9�ܱ��� �������� ����Ѵ�.\n"); 
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
	printf("// �������� �� ��(nDan)�� ����Ѵ�.\n");
	for(int i = 2; i < 10; i++) {
		printf("%d * %d = %2d\n", nDan, i, (nDan * i));
	}
	printf("\n\n");
}

void MultiTblRow(int nDan, int nRow)
{
	printf("===========MutiTblRow(int nDan, int nRow) Function Start==========\n");
	printf("// �������� �� ��(nDan�� nRow��)�� ����Ѵ�.\n");
	printf("%d * %d = %2d\n", nDan, nRow, (nDan * nRow));
	printf("\n\n");
}