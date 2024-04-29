/* IN this single program we can do some set operation using function
1.union
2.intersectiom
3.difference
*/
#include<stdio.h>
void find_union(int set1[],int set2[],int n1,int n2,int union_set[]);
 void find_intersection(int set1[],int set2[],int n1,int n2,int intersection[]);
 void find_difference(int set1[],int set2[],int n1,int n2,int difference[]);

int main(){
	int set1[10],set2[10],union_set[25],intersection[15],difference[25];
	int n1,n2,i;
	printf("Enter the size of first set\n");
	scanf("%d",&n1);
		printf("Enter the size of second set\n");
	scanf("%d",&n2);
	printf("Enter the first set\n");
	for(i=0;i<n1;i++){
		scanf("%d",&set1[i]);
	}
		printf("Enter the second set\n");

	for(i=0;i<n2;i++){
		scanf("%d",&set2[i]);
	}
	find_union( set1,set2,n1,n2,union_set);
find_intersection(set1,set2,n1,n2,intersection);
find_difference(set1,set2,n1,n2,difference);

}
void find_union(int set1[], int set2[], int n1, int n2, int unionSet[]) {
    int i, j, k;
    k = 0;

    for (i = 0; i < n1; i++) {
        unionSet[k] = set1[i];
        k++;
    }


    for (i = 0; i < n2; i++) {
        for (j = 0; j < n1; j++) {
            if (set2[i] == set1[j]) {
                break;
            }
        }
        if (j == n1) {
            unionSet[k] = set2[i];
            k++;
        }
    }
    	printf("The union of set\n{");
	for(i=0;i<k;i++){
		printf("%d",unionSet[i]);
		if(i<k-1){
			printf(",");
		}
	}
	printf("}\n");


}
 void find_intersection(int set1[],int set2[],int n1,int n2,int intersection[]){
 int i,j,k=0;
for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                intersection[k] = set1[i];
                k++;
            }
        }
    }

    printf("\nIntersection set:\n {");
    for (i = 0; i < k; i++) {
        printf("%d", intersection[i]);
        if (i < k - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}
void find_difference(int set1[],int set2[],int n1,int n2,int difference[]){
	 int i,j,k=0,l=0;
	  for (i = 0; i < n1; i++) {
        difference[k] = set1[i];
        k++;}
for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (set2[i] == set1[j])
			  break;
			 
                
            }
            if (j!=n1){
            	difference[k]=set2[j];
            	l++;
			}
            
        }
    
    printf("\nDifference set:\n {");
    for (i = 0; i < l; i++) {
        printf("%d", difference[i]);
        if (i < l- 1) {
            printf(", ");
        }
    }
    printf("}\n");
}


