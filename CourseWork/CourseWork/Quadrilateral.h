#pragma once
#include"IShape.h"
#include<string>

class Quadrilateral : public IShape //����� �����������������, ����������� �� ������ �����
{
public:
	void Rotate() override; //������� ������
	void Translate() override; //����������� �� ��� ������
	virtual void Scale() = 0; //���������� �������� ������
	virtual void Rendering() = 0; //��������� ������
	std::string GetName() {
		return this->nameType;
	}
	virtual std::string GetQuadrilateralName() = 0;
	static Quadrilateral& SelectShape();
private:
	std::string nameType = "Quadrilateral";
};

