#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

// Giả sử hàm này nhận dữ liệu từ UART và lưu vào buffer
void uart_receive(char *buffer, int length) {
    // Đây chỉ là ví dụ. Bạn cần thay thế bằng hàm nhận dữ liệu thực tế từ UART
    strncpy(buffer, "nguyen tuan ngoc 30", length);
    printf("%s \r\n", buffer);
}
void parse_uart_data(const char *buffer, Person *person) {
    // Sử dụng sscanf để phân tích chuỗi
    sscanf(buffer, "%s %s %s %d", person->name, person->name + strlen(person->name) +1 , person->name + strlen(person->name) + 2, &person->age);
    printf("%s \r\n", buffer);
    // Kết hợp các phần của tên lại
    strcat(person->name, " ");
    strcat(person->name, person->name + strlen(person->name) + 1);
    strcat(person->name, " ");
    strcat(person->name, person->name + strlen(person->name) + 2);
}

int main() {
    char uart_buffer[100];
    Person person;

    // Nhận dữ liệu từ UART
    uart_receive(uart_buffer, sizeof(uart_buffer));

    // Phân tích dữ liệu và lưu vào cấu trúc
    parse_uart_data(uart_buffer, &person);

    // In ra kết quả để kiểm tra
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}

