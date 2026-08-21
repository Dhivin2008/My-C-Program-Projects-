#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the row: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 5; j++) {
            // Logic for 'D' Shape
            if(j == 1
               || i == 1 && j < 5
               || i == n && j < 5
               || j == 5 && i > 1 && i < n) {

                printf("🩵");
            }else {
                printf(" ");
            }
        }
        printf(" ");
        for(j = 1; j <= 5; j++){
            // Logic for 'H' Shape
            if(j == 1 || j == 5 || i == 3){
                printf("🤍");
            }else{
                printf(" ");
            }
        }
        printf("  ");
        for(j = 1; j <= 5; j++) {
            // Logic for 'I' Shape
            if(i == 1 || i == n || j == 3) {
                printf("🩵");
            }else {
                printf(" ");
            }
        }
        printf("  ");
        for(j = 1; j <= 5; j++) {
            // Logic for 'V' Shape
            if(j ==1&&i<=3||j==5&&i<=3||i==4&&j==2||i==4&&j==4||i==5&&j==3) {
                printf("🤍");
            }else {
                printf(" ");
            }
        }
        printf(" ");
        for(j = 1; j <= 5; j++) {
            // Logic for 'I' Shape
            if(i == 1 || i == n || j == 3) {
                printf("🩵");
            }else {
                printf(" ");
            }
        }
        printf(" ");
        for(j = 1; j <= 5; j++) {
            // Logic for 'N' Shape
            if(j == 1 || j == 5 || i == j) {
                printf("🤍");
            }else {
                printf(" ");
            }
        }
        printf("\n");
        }
}        
    