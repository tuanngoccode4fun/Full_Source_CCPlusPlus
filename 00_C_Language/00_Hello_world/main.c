#include <stdio.h>
#include <stdint.h>
#include "file1.h"
#include "file2.h"
typedef struct 
{
    int valueA ;
    int valueB ;
    long valueC ;
} myStruct;
typedef struct
{
    uint8_t setColor:3;
    uint8_t setMode:5;
} config_color_t;
union ConfigUnion {
    config_color_t colorConfig;
    int8_t valueFull;
};


union ConfigUnion configUnion;

void main() 
{
    int i;
    printf("Size of struct %ld \r\n", sizeof(myStruct));
    char const **ptr = NULL;
    printf("Size of ptr = %ld  \r\n", sizeof(*ptr));
    printf("value of total is = %d \r\n", add(10,1100));
    configUnion.valueFull = 10;
    printf("config_color_t = size =%ld setColor = %d setMode = %d \r\n",sizeof(config_color_t), configUnion.colorConfig.setColor, configUnion.colorConfig.setMode);

}