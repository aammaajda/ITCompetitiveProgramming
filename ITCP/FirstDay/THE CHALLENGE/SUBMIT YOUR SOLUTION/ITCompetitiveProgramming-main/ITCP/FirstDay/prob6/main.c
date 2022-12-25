#include <stdio.h>
#include <stdlib.h>
int check(int T[],int i,int n){
    int j;
    for(j=0;j<n;j++){

            if(T[j]==i){
                return j;
                }
}
    return -1;
}
int main()
{
    int i,n,T[100];
    printf("donner une valeur n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&T[i]);
    }


    int r = check(T,i,n);
    if (r==-1){
        printf("n'existe pas");
    }
    else{
        printf("il existe pos= %d",r);
    }

    return 0;
}
