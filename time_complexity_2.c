#include <stdio.h>

int main()
{
    int i, j, k, n, count = 0;

    scanf("%d",&n);

    count = 0;

    for( i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            for( k = 0; k < n; k++){
                count = count + 1;
            }
        }
    }

//  output will be 1 = 1, 2 = 8, 3 = 9 , 4 = 64

    printf("n = %d, count = %d\n",n,count);

    return 0;
}
