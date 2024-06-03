#include <iostream>
//Include thu vien 
#include <string>
/*
    std::string
    dynamic array of char (similar to vector<char>)
    concatenation with + or +=
    single character access with [index]
    modifiable ("mutable") unlike in e.g., Python or Java
    regular: deeply copyable, deeply comparable
*/
int main()
{
    //Declare a string is empty
    std::string text1;
    std::cout<<"text1 ="<< text1<<std::endl;
    std::string text2 = "text text text";
    std::cout<<"text2 ="<< text2<<std::endl;
    std::string text3("This is a text3");
    std::cout<<"text3 ="<< text3<<std::endl;

    //Method of string. It is NO included NULL character.
    //LENGTH();
    std::cout<<"Length of text1 ="<< text1.length()<<std::endl;
    std::cout<<"Length of text2 ="<< text2.length()<<std::endl;
    std::cout<<"Length of text3 ="<< text3.length()<<std::endl;
    //EMPTY();
    if(text1.empty())
    {
        std::cout<<"The string is empty"<<std::endl;
    }
    //APPEND() OR Operater+=
    text1.append("This text1 append more text");
    std::cout <<"text1 = "<<text1<<std::endl;
    text1+="+ More text";
    std::cout <<"text1 = "<<text1<<std::endl;
    //SUBSTR() Get a part of string
    std::string substr_text1 = text1.substr(0,10);
    std::cout<<"substr_text1 ="<<substr_text1<<std::endl; 
    //FIND() Find a text in string.
    std::size_t sizet= text2.find("text");
    std::cout<< sizet<<std::endl;
    std::size_t sizet1= text2.find_last_of("text");
    std::cout<< sizet1<<std::endl;
    //REPLACE()
    text2.replace(0,2,"String replaced");
    std::cout<<text2<<std::endl;
    // You can iterate over the characters in a string using a loop:
    for(char c: text1)
    {
        std::cout<<" "<<c;
    }
    std::cout<<std::endl;
    for(int i = 0;i < text1.length();i++)
    {
        std::cout<<text1[i]<<" ";
    }
    std::cout<<std::endl;
    //How to convert bettween std::string and const char*
    //std::string => const char*;
    const char * str = text1.c_str();
    //const char* => std::string
    std::string text4 = str;
    std::cout<< text4<<std::endl;

    //SO SANH 2 CHUOI
    std::string str1 = "apple";
    std::string str2 = "banana";

    int result = str1.compare(str2);

    if (result == 0) {
        std::cout << "str1 is equal to str2" << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is less than str2" << std::endl;
    } else {
        std::cout << "str1 is greater than str2" << std::endl;
    }

    //COPY 
    char arrayChar[50];
    text1.copy(arrayChar,50,0);
    std::cout<<arrayChar<<std::endl;
    //INSERT
    text1.insert(10,"Ngoc");
    std::cout<<"After insert: ="<< text1<<std::endl;
    //ERASE
    text1.erase(10,4);
    std::cout<<"After erase: ="<< text1<<std::endl;
    //RESIZE
    text1.resize(10);
    std::cout<<"After resize: ="<< text1<<std::endl;
    text1.resize(50,'x');
    std::cout<<"After resize: ="<< text1<<std::endl;
     //std::getline
     std::string text5;
     getline(std::cin,text5);
      std::cout<<"After getline: ="<< text5<<std::endl;
     getline(std::cin,text5,'\t');
      std::cout<<"After getline: ="<< text5<<std::endl;
     getline(std::cin,text5,'a');
      std::cout<<"After getline: ="<< text5<<std::endl;

    return 0;
}