#include <stdio.h>
#include <string.h>

void midstr(char str[], int a, int b)
{
	for (int i = 0; i < 1; )
	{
		if (strlen(str)<a || a<=0) 
		{
			printf("ERROR\n");
			scanf("%s %d %d", str,&a,&b);
		}
		else if ((strlen(str)-a+1) < b)
		{
			printf("ERROR\n");
			scanf("%s %d %d", str, &a,&b);
		}
		else
		{
			i++;
		}
	}
	int i;
	for ( i = 0; i < b; i++)
	{
		str[i] = str[a+i-1];
	}
	str[i] = '\0';
}

int main()
{
	char str[80];
	int a, b;

	scanf("%s %d %d", str, &a, &b);

	midstr(str, a, b);

	printf("결과 문자열은 %s 입니다\n", str);

	return 0;
}