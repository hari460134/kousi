#include <stdio.h>

int main(void) {
	int n,i,max=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d\n",max);



	
	// your code goes here
	return 0;
}
