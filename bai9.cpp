#include<stdio.h>
int main(){
    int num, firstNum, lastNum, result;
    printf("Cac so Armstrong trong khoang 100 den 999 la:\n");

    for (num = 100; num < 1000; num++) {
        firstNum = num;  // Gán giá trị ban đầu cho biến tạm
        result = 0;      // Đặt tổng ban đầu là 0

        // Tách từng chữ số và tính tổng lũy thừa bậc 3
        while (firstNum != 0) {
            lastNum = firstNum % 10;// Lấy chữ số cuối cùng
            result += lastNum * lastNum * lastNum;// Cộng lũy thừa bậc 3 vào tổng
            firstNum /= 10;// Loại bỏ chữ số vừa xử lý
        }

        // Kiểm tra nếu tổng lũy thừa bậc 3 bằng chính số ban đầu
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
