#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int set1[25] ;
    int set2[25];
      int i, j, k,n1,n2;
   int intersect[n1 + n2];
    k = 0;
    printf("Enter size of first and second set\n");
    scanf("%d%d",&n1,&n2);
    
     printf("Enter the first set\n");
     for (i = 0; i < n1; i++) {
    scanf("%d",&set1[i]);
}
     printf("Enter the second set\n");
for (i = 0; i < n2; i++) {
	    scanf("%d",&set2[i]);
}
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                intersect[k] = set1[i];
                k++;
            }
        }
    }

    printf("Intersection set: {");
    for (i = 0; i < k; i++) {
        printf("%d", intersect[i]);
        if (i < k - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}

