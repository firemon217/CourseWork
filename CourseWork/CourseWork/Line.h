#pragma once
#include<string>
#include"IShape.h"
#include<string>

class Line : public IShape //����� �����, ����������� �� ������ �����
{
	public:
		Line(); //�����������
		void Rotate() override; //������� ������
		void Translate() override; //����������� �� ��� ������
		void Scale() override; //���������� �������� ������
		void Rendering(); //��������� ������
		std::string GetName() {
			return this->nameType;
		}
		static Line& SelectShape();
	private:
		int size; //������ �����
		int startCoordinate; //���������� ������ �����
		int endCoordinate; //���������� ����� �����
		std::string nameType = "Line";
};