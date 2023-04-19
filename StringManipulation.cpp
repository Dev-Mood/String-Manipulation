#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    int len;

    // Copy str1 to str3
    strcpy(str3, str1);
    cout << "strcpy: " << str3 << endl;

    // Compare str1 and str2
    if (strcmp(str1, str2) == 0)
        cout << "strcmp: Strings are equal" << endl;
    else
        cout << "strcmp: Strings are not equal" << endl;

    // Length of str1
    len = strlen(str1);
    cout << "strlen: " << len << endl;

    // Concatenate str1 and str2
    strcat(str1, str2);
    cout << "strcat: " << str1 << endl;

    // Find substring in str1
    char *ptr = strstr(str1, "World");
    cout << "strstr: " << ptr << endl;

    // Convert str1 to uppercase
    for (int i = 0; str1[i] != '\0'; i++)
        str1[i] = toupper(str1[i]);
    cout << "toupper: " << str1 << endl;

    return 0;
}

