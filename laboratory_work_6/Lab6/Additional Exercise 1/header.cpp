#include <iostream>
#include "header.h"

void printHello() {
    setlocale(LC_CTYPE, "Russian");
    std::cout << "������, ���!" << std::endl;
}