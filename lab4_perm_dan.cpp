// lab4_perm_dan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите число:";
    cin >> num;
    if (num < 0) {
        cout << "Число отрицательное";
    }
    else if (num = 0) {
        cout << "Число равно нулю";
    }
    else if (num > 0) {
        cout << "Число положительное";
    }
    else {
        cout << "Это не число";
    }
   
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите год:";
    cin >> num;
    if (num%4==0) {
        cout << "Год високосный";
    }
   else {
        cout << "Год не високосный";
    }

    return 0;
}*/

#include <iostream>
using namespace std;

/*int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите число:";
    cin >> num;
    if (num % 3==0) {
        if (num % 5 == 0) {
            cout << "Число кратно 5 и 3 одновременно";
        }
        else {
            cout << "Число не кратно 5 и 3 одновременно";
        }
    }
    else {
        cout << "Число не кратно 5 и 3 одновременно";
    }


    return 0;
}*/
 #include <iostream>
using namespace std;

/*int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите год:";
    cin >> num;
    if (num % 100== 0) {
        cout << "Год является вековым";
    }
    else {
        cout << "Год не является вековым";
    }

    return 0;
}*/
#include <iostream>
using namespace std;
/*int main()
{
    setlocale(0, "");
    int num1;
    int num2=1;
    cout << "Введите число:";
    cin >> num1;
    for (int i = 0; num2 <= num1; ++i)
    {
        if (num1 == num2)
        {
            cout << "Введенное число является степенью двойки" << endl;
            return 0;
        }
        num2 *= 2;
    }
    cout << "Введенное число не является степенью двойки" << endl;

    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int num1;
    int num2;
cout << "Введите число: ";
cin >> num1;

if (num1 == 0 || num1 == 1) {
    num2 = false;
}
else {
    for (num1 = 2; num1 <= num2 / 2; ++num1) {
        if (num2 % num1 == 0) {
            num2 = false;
            break;
        }
    }
}
if (num2)
cout << num1 << " это простое число.";
else
cout << num1 << " это не простое число.";
return 0;




       
 


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
