#include <iostream>
using namespace std;

class String
{
private:
    size_t size_data;
    char *str;
    int init_str = 0;
    int free_str();
    int check_alloc();

public:
    int set_size_data();
    int set_string();
    void print_string();  
    String();
    String(const char* string);
    String(const String& copy);
    ~String();
};

// String::~String()
// {
// }
