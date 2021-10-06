#pragma once
#include <string> //��� ������ � ������� string
#include <cstdint> //��� ������ � uint64_t
class Goods {
	std::string name, date; //���� ������ Goods. ����� � ������������ private ��� ���������� ������������.
	uint64_t price, quantity, number; //����� ����.
public: //������ ��� ������ � ������ ������ ��������� � ������������� public
	Goods(std::string, std::string, uint64_t, uint64_t, uint64_t); //�����������, ����������� �� ���� ��� ���������� ��� �������� ������� � ������������ �� � ��������������� ����

	void changePrice(uint64_t); //������� ��������� ����, ���������� ����� ������� ����������

	void changeQuantity(uint64_t);//��������� ���������� ������, ����� ����������

	uint64_t countCost(); //������� ����� ���������. ���� ������ ������ ���������� �� ���������� ������ �� ������

	std::string toString(); //�������������� ����� ��������� � ������. ������������ ����� ������ string

	uint64_t getPrice(); //������� ��������� ���� ������ ������ ��� ������������ ������ ������� changePrice()

	uint64_t getQuantity(); //��������� ���������� ������ ��� ������������ ������ ������� changeQuantity()

};