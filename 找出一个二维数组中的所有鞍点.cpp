#include <stdio.h>
int a[233][233];
int n,m;
int main() {
	scanf("%d%d",&n,&m);
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j)
			scanf("%d",&a[i][j]);
	int cnt = 0;
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j) {
			int flag = 1;
			for(int j1 = 1 ; j1 <= m ; ++j1)
				if(a[i][j1] > a[i][j]) flag = 0;
			for(int i1 = 1 ; i1 <= n ; ++i1)
				if(a[i1][j] < a[i][j]) flag = 0;
			if(flag) printf("a[%d][%d]=%d ",i-1,j-1,a[i][j]),cnt++;
		}
	if(cnt==0) printf("NO\n");
	else printf("\n");
}
