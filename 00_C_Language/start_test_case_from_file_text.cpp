
#include <iostream>
using namespace std;
int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == nullptr) {
        cout << "Không thể mở file.\n";
        return 1;
    }

    int num_test_cases;
    fscanf(file, "%d", &num_test_cases); // Đọc số lượng test case

    for (int i = 0; i < num_test_cases; ++i) {
        int num1, num2, sum;
        fscanf(file, "%d %d %d", &num1, &num2, &sum); // Đọc 3 số trong mỗi test case
        cout << "Test case " << i + 1 << ": " << num1 << " + " << num2 << " = " << sum << endl;
    }

    fclose(file);
    return 0;
}
