#include <stdio.h>
int Max(int a,int b) { return a>b?a:b;}
int Abs(int a) {return a>0?a:-1*a;}
int main() {
	int n;
	int a[1003];
	scanf("%d",&n);
	int ans = 0;
	for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
	for(int i = 2 ; i <= n ; ++i) {
		ans = Max(ans,Abs(a[i]-a[i-1]));
	}
	printf("%d\n",ans);
}

