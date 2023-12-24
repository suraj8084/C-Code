#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	//Sort an array a of the length n
    float p;
    int i,j,area[100];
    for(i=0;i<n;i++)
    {
    p=(tr[i].a/2.0+tr[i].b/2.0+tr[i].c/2.0);
    area[i] = p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
        if(area[j]>area[j+1])
        {
            int temp = area[j];
            area[j]=area[j+1];
            area[j+1]=temp;
            
            temp = tr[j].a;
            tr[j].a=tr[j+1].a;
            tr[j+1].a=temp;
            
            temp = tr[j].b;
            tr[j].b=tr[j+1].b;
            tr[j+1].b=temp;
            
            temp = tr[j].c;
            tr[j].c=tr[j+1].c;
            tr[j+1].c=temp;
        }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}