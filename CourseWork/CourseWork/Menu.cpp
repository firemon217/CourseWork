#pragma once
#include"IShape.h"
#include"Triangle.h"
#include"Line.h"
#include"Quadrilateral.h"
#include"Menu.h"
#include<vector>
#include<iostream>

using namespace std;

Menu::Menu()
{
	int exit = 0;
	while (!exit)
	{
		cout << "�������� ������:\n1.�����������\n2.���������������\n3.�����" << endl;
		int n;
		cin >> n;
		switch (n)
		{
			case 1:
			{
				SelectInstrument(Triangle::SelectShape());
				break;
			}
			case 2:
			{
				SelectInstrument(Quadrilateral::SelectShape());
				break;
			}
			case 3:
			{
				SelectInstrument(Line::SelectShape());
				break;
			}
			default:
			{
				exit = 1;
			}
		}
	}
}

void Menu::SelectInstrument(IShape& shape)
{
	int exit = 0;
	while (!exit)
	{
		cout << "�������� ��������\n1. ���������\n2. ���������\n3. �����������\n4. ����������" << endl;
		int n;
		cin >> n;
		switch (n)
		{
			case 1:
			{
				shape.Rotate();
				break;
			}
			case 2:
			{
				shape.Scale();
				break;
			}
			case 3:
			{
				shape.Translate();
				break;
			}
			case 4:
			{
				shape.Rendering();
				break;
			}
			default:
			{
				cout << "Error" << endl;
				exit = 1;
			}
		}
	}
}