#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, count=12, multi;
    cout << "Hola...\n";
    cout << "Esta es un corto ejemplo de C++\n";
    cout << "Por cierto esto es una generadora de tabla de multiplicar\n";
    cout << "Dame un numero: ";
    cin >> num;
    for (int i = 0; i <= count; i++)
    {
    multi = num * i;
    cout << num << " * " << i << " = " << multi << endl;
    }
    
    return 0;
}
