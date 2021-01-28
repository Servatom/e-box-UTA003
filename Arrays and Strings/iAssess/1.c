#include <stdio.h>
#include<stdlib.h>
int main(){
        int i, j, a, n,*number;
        printf("Enter the number of elements in an array \n");
        scanf("%d", &n);
        number=(int*)malloc(n*sizeof(int)) ;
        printf("Enter the array elements \n");
        for (i = 0; i < n; ++i)
            scanf("%d", (number+i));
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (*(number+i) > *(number+j)) 
                {
                    a =  *(number+i);
                    *(number+i) = *(number+j) ;
                    *(number+j) = a;
                }
            }
        }
 
        printf("Sorted array\n");
        for (i = 0; i < n; ++i)
            printf("%d\n", *(number+i));
 		return 0 ;
 	}
