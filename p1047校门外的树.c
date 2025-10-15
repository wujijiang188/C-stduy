#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int l, m;
    scanf("%d %d", &l, &m);

    int trees[10005] = { 0 }; 
    for (int i = 0; i <= l; i++) {
        trees[i] = 1;  
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++) {
            trees[j] = 0;
        }
    }
    int remaining = 0;
    for (int i = 0; i <= l; i++) {
        if (trees[i] == 1) {
            remaining++;
        }
    }

    printf("%d\n", remaining);
	return 0;
}
