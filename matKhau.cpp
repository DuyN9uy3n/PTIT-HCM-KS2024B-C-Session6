#include <stdio.h>  
#include <string.h>

int main() {
    const char *correctPassword = "duynguyen123";
    char inputPassword[50];

    printf("Nhap mat khau: ");  
    scanf("%s", inputPassword);

    if (strcmp(inputPassword, correctPassword) == 0) {  
        printf("Mat khau dung.\n");  
    } else {  
        printf("Mat khau sai.\n");  
    }  

    return 0;  
}