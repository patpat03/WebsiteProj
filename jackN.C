#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_(char first,char *point)
{
    char *point_temp, temp;
	int n = 2;

	point = (char *) malloc( n * sizeof(char));
	point_temp = (char *) malloc( n * sizeof(char));
	point_temp[0] = first;
    point_temp[1] = '\0';
	if(point == NULL)
	{
		printf("内存不足\n");
		return ;
	}
	temp = getchar();
	while(temp != '\n')
	{
		point = (char *) realloc( point, (n+1) * sizeof(char));
		strcpy(point , point_temp);
		point_temp = (char *) realloc( point_temp, (n+1) * sizeof(char));
		point[n-1] = temp;
		point[n++] = '\0';
		strcpy(point_temp, point);
		temp = getchar();
	}
	free(point_temp);
	point_temp = NULL;
	return ;
}
int main()
{
    char **a, temp;
    int n = 1;
    a = (char **)malloc(sizeof(char *) * 1);
    while(scanf("%c",&temp))
    {
		putchar(temp);
		puts("\n");
        read_(temp, a[n]);
		puts(a[n]);
        a = (char **)realloc(a, sizeof(char *) * ++n);
    }
    int i = 0;
    while(i<n)
        printf("%s\n",a[i++]);
}
