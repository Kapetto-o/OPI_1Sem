﻿#include <iostream>
// LenkevichPavel2004
// Windows-1251: 4C-65-6E-6B-65-76-69-63-68 50-61-76-65-6C 32-30-30-34
// UTF-8: 4C-65-6E-6B-65-76-69-63-68 50-61-76-65-6C 32-30-30-34
// UTF-16: 4C-65-6E-6B-65-76-69-63-68 50-61-76-65-6C 32-30-30-34

// ЛенкевичПавелАндреевич2004
// Windows-1251: 41B-435-43D-43A-435-432-438-447 41F-430-432-435-43B 410-43D-434-440-435-435-432-438-447 32-30-30-34
// UTF-8: D09B-D0B5-D0BD-D0BA-D0B5-D0B2-D0B8-D187 D09F-D0B0-D0B2-D0B5-D0BB 32-30-30-34
// UTF-16: 41B-435-43D-43A-435-432-438-447 41F-430-432-435-43B 32-30-30-34

// Ленкевич2004Pavel5
// Windows-1251: 41B-435-43D-43A-435-432-438-447 32-30-30-34 50-61-76-65-6C
// UTF-8: D09B-D0B5-D0BD-D0BA-D0B5-D0B2-D0B8-D187 32-30-30-34 50-61-76-65-6C
// UTF-16: 41B-435-43D-43A-435-432-438-447 32-30-30-34 50-61-76-65-6C

int main()
{   
    setlocale(LC_CTYPE, "rus");
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "LenkevichPavel2004";
    char rfie[] = "ЛенкевичПавелАндреевич2004";
    char lr[] = "Ленкевич2004Pavel";

    wchar_t Lfie[] = L"LenkevichPavel2004";
    wchar_t Rfie[] = L"ЛенкевичПавелАндреевич2004";
    wchar_t LR[] = L"Ленкевич2004Pavel";
    std::cout << hello << rfie << std::endl;
    return 0;
}