#include<stdio.h> 
#include<math.h> 
#include<locale.h> 

void task1()
{
	int A, B, i;
	printf("Ââåäèòå ÷èñëî A: ");
	scanf_s("%d", &A);
	printf("Ââåäèòå ÷èñëî B: ");
	scanf_s("%d", &B);
	while (A < B)
	{
		for (i = A; i < B; i++)
		{
			printf("×èñëà: %d\n", B--);
		}
		printf("Êîëè÷åñòâî ÷èñåë : %d\n", i++);
	}

}
void task2()
{
	int A, B, N, H, i, x;
	float F;
	printf("Ââåäèòå íà÷àëî îòðåçêà:");
	scanf_s("%d", &A);
	printf("Ââåäèòå êîíåö îòðåçêà:");
	scanf_s("%d", &B);
	printf("Ââåäèòå êîëè÷åñòâî ÷àñòåé îòðåçêà:");
	scanf_s("%d", &N);
	if (N > 2 && A < B)
	{
		for (i = 0; i <= N; i++)
		{
			H = (B - A) / N;
			x = A + i * H;
			F = 1 - sin(x);
			printf("Çíà÷åíèå ôóíêöèè: %d\n", F);
		}

	}

}

void task3()
{
	int D, N, An, i;
	int A = 1;
	printf("Ââåäèòå ÷èñëî D:");
	scanf_s("%d", &D);
	printf("Ââåäèòå êîëè÷åñòâî ÷èñåë:");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		An = A * i;
		if ((A*i - A * (i–1)) < D)
		{
			printf("Êîýôèöèåíò: %d\n", i);
		}
	}

}



int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int flag;
	int a;
	do
	{
		printf("Ââåäèòå íîìåð çàäàíèÿ: ");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		default:
			break;
		}
		printf("Õîòèòå ïðîäîëæèòü? 1/0 \n");
		scanf_s("%d", &flag);
	} while (flag == 1);
}