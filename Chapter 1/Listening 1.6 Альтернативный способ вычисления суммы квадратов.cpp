#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    // Изменение кодировки консоли: 
    system("chcp 1251>nul");
    // Верхняя граница суммы и значение суммы:
    int n,s=0;
    // Ввод значения для верхней границы ряда:
    cout<<"Верхняя граница суммы: ";
    cin>>n;
    // Оператор цикла для вычесления суммы:
    while(n){
        // Добавление нового слагаемого к сумме:
        s+=n*n;
        // Уменьшение (на 1) значения переменной:
        n--;
    }
    // Отображение результата вычислений:
    cout<<"Сумма квадратов: "<<s<<endl;
    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}
