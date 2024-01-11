#include <stdio.h>

int main(){
    int num;
    while(scanf("%d",&num) != EOF){
        int graph[num][num], count = 0;
        for(int i=0; i<num; i++){
            int sum = 0;
            for(int j=0; j<num; j++){
                scanf("%d",&graph[i][j]);
                sum += graph[i][j];
                if(i == j && graph[i][j] == 1){
                    sum++;
                }
            }
            if(sum % 2 != 0){
                count++;
            }
        }
        printf("%d\n", count);
        if(count == 2 || count == 0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}