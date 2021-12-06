#include <stdio.h>

int main()
{
    int i, n , even[101];

    for( i = 0; i < 101; i++){
        even[i] = 0;
    }
    for(i = 0; i < 101; i+=2 ){
        even[i] = 1;
    }

    scanf("%d",&n);

// for show how to work in even array all the elements

//    for(i = 0; i < 101; i++){
//        printf("%d\n",even[i]);
//    }

    if(even[n]){
        printf("%d is even number.\n",n);
    }else {
        printf("%d is odd number.\n",n);
    }

    return 0;
}
