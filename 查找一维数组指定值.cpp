#include <stdio.h>
int a[2333333];
int n;
int x;
int main() {
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
	scanf("%d",&x);
	int flag = 0;
	for(int i = 1 ; i <= n ; ++i) {
		if(a[i]==x) {
			printf("%d ",i-1);
			flag = 1;
		}
	}
	if(!flag)	printf("-1\n");
	else printf("\n");
}
