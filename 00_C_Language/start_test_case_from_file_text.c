#include <stdio.h>
int sumFunction(int a, int b)
{
    return a +b;
}
int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Không thể mở file.\n");
        return 1;
    }

    int num_test_cases;
    fscanf(file, "%d", &num_test_cases); // Đọc số lượng test case

    for (int i = 0; i < num_test_cases; i++) {
        int num1, num2, sum;
        fscanf(file, "%d %d %d", &num1, &num2, &sum); // Đọc 3 số trong mỗi test case
        if(sumFunction(num1,num2)!= sum)
        {
            printf("You is fail case number %d \r\n", i);
            return 1;
        }
        else
        {
              printf("You passed case number %d \r\n", i);
        }
    }

    fclose(file);
    return 0;
}
