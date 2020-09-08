#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,found,s=1;
    int arr[1000000];
    scanf ("%d",&n);
    scanf ("%d",&found);
    for (int i = 0; i<=n;i++){
        scanf ("%d",&arr[i]);
        
    }
    for (int i=0;i<=n;i++){
        if (arr[i]==found){
            printf ("found");
            break;
        }
        else
            s += 1;
    }
    if (s>n)
        printf("not found");
    return 0;
}
