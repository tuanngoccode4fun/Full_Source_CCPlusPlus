cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Thêm tất cả các tệp mã nguồn trong thư mục 'src' vào biến SOURCES
file(GLOB SOURCES "src/*.c")

# Thêm tệp main.c vào danh sách SOURCES
list(APPEND SOURCES "main.c")

# Bao gồm thư mục 'include' cho các tệp header
include_directories(include)

# Tạo target thực thi từ các tệp mã nguồn
add_executable(my_executable ${SOURCES})



