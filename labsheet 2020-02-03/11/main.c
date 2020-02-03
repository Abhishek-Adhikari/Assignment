#include <stdio.h>
int main(){
    int deci,bin[32
            ]={};
    printf("give a number \n");
    scanf("%d",&deci);
    for (int i=0;deci>0;i++){
        bin[i]=deci%2;
        deci=deci/2;

    }
    for (int i=31;i>=0;i--){
    printf("%d",bin[i]);
    }
    return 0;
}
