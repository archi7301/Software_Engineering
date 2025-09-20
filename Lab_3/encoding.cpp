#include <iostream>
// TsyganokArtyom2007
// ЦыганокАртёмДмитриевич2007
// Цыганок2007Artyom

// Представление строки в Windows-1251:
// 54 73 79 67 61  6E 6F 6B 41 72 74 79 6F 6D 32 30 30 37
// D6 FB E3 E0 ED EE  EA C0 F0 F2 B8 EC C4 EC  E8 F2 F0 E8 E5 E2 E8 F7  32 30 30 37
// D6 FB E3 E0 ED EE EA  32 30 30 37 41 72 74 79  6F 6D

// Представление строки в UTF-8:
// 54 73 79 67 61  6E 6F 6B 41 72 74 79 6F 6D 32 30 30 37
// D0 A6 D1 8B D0 B3 D0 B0 D0 BD D0 BE D0 BA D0 90 D1 80 D1 82 D1 91 D0 BC D0 94 D0 BC D0 B8 D1 82 D1 80 D0 B8 D0 B5 D0 B2 D0 B8 D1 87 32 30 30 37
// D0 A6 D1 8B D0 B3 D0 B0 D0 BD D0 BE D0 BA 32 30 30 37 41 72 74 79 6F 6D

// Представление строки в UTF-16:
// 54 00 73 00 79 00 67 00 61 00 6E 00 6F 00 6B 00 41 00 72 00 74 00 79 00 6F 00 6D 00 32 00 30 00 30 00 37 00
// 26 04 4B 04 33 04 30 04 3D 04 3E 04 3A 04 10 04 40 04 42 04 51 04 3C 04 14 04 3C 04 38 04 42 04 40 04 38 04 35 04 32 04 38 04 47 04 32 00 30 00 30 00 37 00
// 26 04 4B 04 33 04 30 04 3D 04 3E 04 3A 04 32 00 30 00 30 00 37 00 41 00 72 00 74 00 79 00 6F 00 6D 00


int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "TsyganokArtyom2007";
	char rfie[] = "ЦыганокАртёмДмитриевич2007";
	char lr[] = "Цыганок2007Artyom";

	wchar_t Lfie[] = L"TsyganokArtyom2007";
	wchar_t Rfie[] = L"ЦыганокАртёмДмитриевич2007";
	wchar_t LR[] = L"Цыганок2007Artyom";
	std::cout << hello << lfie << std::endl;
	return 0;
}