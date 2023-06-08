#include "String.hpp"
#include <string.h>
// define coustrctor
String ::String()
{
    printf("counstrctor insert\n");
    set_size_data();
    check_alloc();
    cout << "start string " << endl;
}
// define counstrctor recive string
String::String(const char *string)
{

    size_data = strlen(string) + 1;
    str = new char[size_data];
    // take from user and
    // cin.getline(str, size_data);
    // insert data to string array
    for (int i = 0; i <= size_data; i++)
    {
        str[i] = string[i];
        if (i == size_data)
        {
            str[i + 1] = '\0';
        }
    }
}
String ::String(const String &copy)
{
    char *copy_str;
    copy_str = new char[size_data];
    for (int i = 0; i <= size_data; i++)
    {
        copy_str[i] = str[i];
        if (i == size_data)
        {
            copy_str[i + 1] = '\0';
        }
    }
    size_data = copy.size_data;
    copy_str = copy.str;
}
String ::~String()
{
    printf("insert to destrctor \n");
    free_str();
}
int String ::set_size_data()
{
    cout << "enter size data " << endl;
    cin >> size_data;
    return 0;
}
int String ::check_alloc()
{
    str = new char[size_data];
    printf("check alloction\n");
    if (str == nullptr)
    {
        cout << "Error: memory could not be allocated";
        return 1;
    }
    else
    {
        if (init_str == 0)
        {
            for (int i = 0; i < size_data; i++)
            {
                str[i] = 0;
            }
            init_str++;
        }
        else
        {
            char word;
            for (int i = 0; i < size_data; i++)
            {
                cin >> word;
                str[i] = word;
            }
        }
        return 0;
    }
}
int String::free_str()
{
    delete[] str;
    printf("free string \n");
    if (str == nullptr)
    {
        cout << " Array is freed" << endl;
        init_str = 0;
    }
    else
    {
        cout << "Array is still allocated" << endl;
    }
    return 0;
}
int String ::set_string()
{
    set_size_data();
    check_alloc();

    return 0;
}
void String::print_string()
{
    puts("start to print ");
    for (int i = 0; i < size_data; i++)
    {
        cout << str[i];
    }
    puts("\nstop to print ");
}
