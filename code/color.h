#pragma once

// ������� ����� �������
#define BASE_COLOR_BG BLACK // ������� ���� ���� ������ � �������
#define BASE_COLOR_TEXT WHITE // ������� ���� ������ � �������

// ��������� ����� ������ � �������
#define TEXT_COLOR(n) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n)
//  ��������� ����� ���� � ������ � �������
#define COLOR(h, bg, text) SetConsoleTextAttribute(h, (bg << 4) | text)

// ������ ������
#define BLACK 0 // ������
#define BLUE 1 // ������
#define GREEN 2 // �������
#define CYAN 3 // �������
#define RED 4 // �������
#define MAGENTA 5 // ���������
#define BROWN 6 // ����������
#define LIGHTGRAY 7 // ������-�����
#define DARKGRAY 8 // �����-�����
#define LIGHTBLUE 9 // ������-�����
#define LIGHTGREEN 10 // ������-�������
#define LIGHTCYAN 11 // ������-�������
#define LIGHTRED 12 // ������-�������
#define LIGHTMAGENTA 13 // ������-���������
#define YELLOW 14 // ������
#define WHITE 15 // �����