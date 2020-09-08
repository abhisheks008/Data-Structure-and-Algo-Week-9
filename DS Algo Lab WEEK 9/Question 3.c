#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[100000];
    int n,key;
    int  s=0;
    scanf ("%d",&key);
    scanf ("%d",&n);
    int i=0;
    for (i=0; i<=n; i++){
        scanf("%d",&arr[i]);
        if (arr[i]==key){
            printf("element found in the position %d",i+1);
            
               
        }
        else {
            s = s +1;
            }
    }
    if (s>n)
        printf ("not found");
    return 0;
}
