#include <iostream>
#include <jsoncpp/json/json.h>

int main()
{
    Json::Value DataJson ;
    DataJson["Name"]= "Nguyen Tuan Ngoc";
    std::cout << DataJson;
    printf("hell tuanngoc \r\n");
    return 0;
}