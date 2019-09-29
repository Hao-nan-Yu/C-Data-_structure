#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *main_string = new char[1000000];
    char *sub_string = new char[100000];
    int location;
    cin >> main_string;
    cin >> sub_string;
    const char *result = main_string;
    result = strstr(result, sub_string);
    if (result != NULL)
        cout << result - main_string + 1;
    else
        cout << 0;
    system("pause");
    return 0;
}