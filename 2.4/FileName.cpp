int bai(int a)
{
	return 100 * a;
}
int shi(int b)
{
	return 10 * b;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int count=0;
	for (a = 1; a <= 4; a++)
	{
		for (b = 1; b <= 4; b++)
		{
			if (b == a)
				continue;
			for (c = 1; c <= 4; c++)
			{
				if (c == b)
					continue;
				if (c == a)
					continue;
				printf("%d\n", bai(a) + shi(b) + c);
				count++;
			}
		}
	}
	printf("%d", count);
}