#pragma once
#include"IShape.h"
#include<string>

class Triangle : public IShape //����� �������������, ����������� �� ������ �����
{
public:
	Triangle();
	void Rotate() override; //������� ������
	void Translate() override; //����������� �� ��� ������
	virtual void Scale() = 0; //���������� �������� ������
	virtual void Rendering() = 0; //��������� ������
	std::string GetName() {
		return this->nameType;
	}
	virtual std::string GetTriangleName() = 0;
	static Triangle& SelectShape();
private:
	std::string nameType = "Triangle";
};
