//Varija K
//24070123165
//Program 6
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);  // Concatenate str2 to str1

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}