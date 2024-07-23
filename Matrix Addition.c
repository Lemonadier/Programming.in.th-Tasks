#include <stdio.h>

int main(void) {
    int n, m, temp, z=2;
    scanf("%d %d", &n, &m);
    int a[n][m];
    
    while (z > 0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (z < 2){
                    scanf("%d", &temp);
                    a[i][j] += temp;
                    continue;
                }
                scanf("%d", &temp);
                a[i][j] = temp;
            }
        }
        z--;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}