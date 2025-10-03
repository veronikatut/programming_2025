#include <iostream>
#include <windows.h>

//int main() {
    //int A, B, C;
    //std::cin >> A >> B >> C;
    //if (A % C == 0 && B % C == 0) 
   //{
       //std::cout << (static_cast<double>(A+B)) / C << std::endl; 
    //}
    //else if (A % C == 0 && B % C != 0)
    //{
        //std::cout << static_cast<double>(A) / C + B << std::endl;
    //}
    //{
        //std::cout << A - B - C << std::endl;
    //}
    //return 0;
//}

//int main()
//{
    //SetConsoleOutputCP(CP_UTF8);
    //SetConsoleCP(CP_UTF8);
    //int N;
    //std::cin >> N;

    //switch (N) {
        //case 1: std::cout << "Понедельник";
        //break;
        //case 2: std::cout << "Вторник";
        //break;
        //case 3: std::cout << "Среда";
        //break;
        //case 4: std::cout << "Четверг";
        //break;
        //case 5: std::cout << "Пятница";
        //break;
        //case 6: std::cout << "Суббота";
        //break;
        //case 7: std::cout << "Воскресенье";
        //break;
        //default: std::cout << "Ошибка! Нет такого дня недели.";
        ///break;
    //}
    //return 0;
//}

int main()
{ 
    int x;
    std::cin >> x;
    if (x == -1) {
        std::cout << "Negative number";
    }
    else {
        std::cout << "Positive number";
    }
    return 0;
}
