# [DS-Test2] Alphabet 순환 출력 문제.

- Test 2 Alphabet 순환 출력 문제를 통해 반복문에 대한 이해도를 체크 해봅니다.

```c
#include <stdio.h>

#define N	26

void main()
{
	// 다음을 출력하라
	// 오른쪽으로 shift하는 경우도 
}
```



### 실행 예시.

![1531802162018](C:\Users\Kchaos7\Desktop\DS TEST\Test2. Alphabet 순환\1531802162018.png)



### 해답.

```c

#include <stdio.h>

#define N   26

void main()
{
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			putchar((i+j)%N+'A');
		}
		putchar('\n');
	}
}
```

> 우선 변수 i 는 0부터 N(26)까지 증가하게 되고 내부에는 변수 j가 0부터 N(26)까지 증가 하게 되는데,  (i+j)을 통해서 0,1,2, ... ,24, 25  그 다음 반복문에서는 1,2,3, ... , 25, 26 처럼  첫번째 숫자가 증가하면서 순차적으로 26개의 숫자를 찍게 되는데 순환을 시켜 주어야 하므로 %N(26) 으로 나머지 연산을 실행해주었다. 
>
> 해당 결과에 +'A' 라는 문자열을 더해주어 숫자가 아닌 문자가 출력되도록 하였습니다.

