#include <stdio.h>
#include <string.h>
char text[] = "255.1.1.0";
char array[100];

int getsizeofcharpoint(char input[])
{
    printf("size of text pass in function = %d \r\n",sizeof(input));
    int i = 0;
    while (*(input + i))
    {
        i++;
    }
    return i;
    
}
void findIndexCom(char *textInput, int length)
{
    printf("Input: %s \r\n", text);
    printf("Length: %d \r\n", length);
    int j=0,i = 0;
    for(i = 0; i<= length; i++)
    {
        if(text[i] == '.')
        {
            array[j]='[';
            j++;
            array[j]='.';
            j++;
            array[j]=']';
            printf("index = %d \r\n", i);
        }
        else
        {
            array[j]=text[i];
        }
            j++;
    }
    printf("Output: %s \r\n",array);
}
int main()
{
    printf("size of text = %d \r\n",sizeof(text) );
    findIndexCom(text,getsizeofcharpoint(text));

    return 0;
}