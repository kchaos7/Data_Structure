# DS-Test1.

```c
    #include <stdio.h>

    #pragma warning( disable : 4996 )

    void main()
    {
        // 아래의 함수들을 사용하여 구구단을 출력하라
    }

    void MultiTbl()
    {
        // 2단부터 9단까지 구구단을 출력한다.
    }

    void MultiTblDan(int nDan)
    {
        // 구구단의 한 단(nDan)을 출력한다
    }

    void MultiTblRow(int nDan, int nRow)
    {
        // 구구단의 한 행(nDan의 nRow행)을 출력한다.
    }
```

- 아래의 함수 MultiTbl(), MultiTblDan(int nDan), MultiTblRow(int nDan, int nRow)을 통해서 구구단을 출력시키는 문제로, 반복문과 함수에 대한 이해가 있어야 해결 할 수 있습니다. 여기서 주의할 점은 MultiTbl() 함수에서 2~9단 까지의 전체 구구단을 출력할 때, 2~5단 까지 출력이 되고 그 다음 라인부터는 6~9단 까지 출력이 되게 끔 코딩해주셔야 합니다. 



### 실행 예시.

![1531790012832](C:\Users\Kchaos7\Desktop\DS TEST\Test1. 구구단\1531790012832.png)

![1531790062645](C:\Users\Kchaos7\Desktop\DS TEST\Test1. 구구단\1531790062645.png)



### 해답.

```c
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
```







