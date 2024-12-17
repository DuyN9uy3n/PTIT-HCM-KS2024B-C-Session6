#include <stdio.h>  
 
void determineZodiac(int day, int month) {  
    if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {  
        printf("Cung hoang dao: Bach Duong\n");  
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {  
        printf("Cung hoang dao: Kim Nguu\n");  
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {  
        printf("Cung hoang dao: Song Tu\n");  
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {  
        printf("Cung hoang dao: Cu Giai\n");  
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {  
        printf("Cung hoang dao: Su Tu\n");  
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {  
        printf("Cung hoang dao: Xu Nu\n");  
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {  
        printf("Cung hoang dao: Thien Binh\n");  
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {  
        printf("Cung hoang dao: Bo Cap\n");  
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {  
        printf("Cung hoang dao: Nhan Ma\n");  
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {  
        printf("Cung hoang dao: Ma Ket\n");  
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {  
        printf("Cung hoang dao: Bao Binh\n");  
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {  
        printf("Cung hoang dao: Song Ngu\n");  
    } else {  
        printf("Ngay sinh khong hop le!\n");  
    }  
}  

int main() {  
    int day, month;  
 
    printf("Nhap vao ngay sinh (1-31): ");  
    scanf("%d", &day);  
    printf("Nhap vao thang sinh (1-12): ");  
    scanf("%d", &month);  
    determineZodiac(day, month);  

    return 0;  
}