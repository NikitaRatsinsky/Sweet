#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class Figure { //�������, ����������� �����

public:

    //����� ����������� ������� �������� (������������) ������

    virtual double calc_square() const = 0;
    virtual double calc_perimeter() const = 0;
};

class Triangle : public Figure { //�����-������� (�����������)

private:

    double a, b, c;

public:

    //��������� ����������� ������ �������� (������������) ������

    double calc_square() const { //������� ���������� ������� ������ (������������)           
        double p = a + b + c;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double calc_perimeter() const { //������� ���������� ��������� ������ (������������)            
        return a + b + c;
    }

    //����������� � ���������� (���������������� �����������)

    Triangle(double side_a, double side_b, double side_c)
        : a(side_a), b(side_b), c(side_c) {}

    //������
    double getA() const {
        return this->a;
    };

    double getB() const {
        return this->b;
    };

    double getC() const {
        return this->c;
    };
};

class Circle : public Figure { //�����-������� (����)

private:

    double r;

public:

    //��������� ����������� ������ �������� (������������) ������

    double calc_square() const { //������� ���������� ������� ������ (�����)           
        return M_PI * r * r;
    }

    double calc_perimeter() const { //������� ���������� ��������� ������ (�����)            
        return 2 * M_PI * r;
    }

    //����������� � ���������� (���������������� �����������)

    Circle(double radius)
        : r(radius) {}

    //�����

    double getRadius() const {
        return this->r;
    }
};

class Rectangle : public Figure { //�����-������� (�������������)

private:

    double a, b;

public:

    //��������� ����������� ������ �������� (������������) ������

    double calc_square() const { //������� ���������� ������� ������ (��������������)           
        return a * b;
    }

    double calc_perimeter() const { //������� ���������� ��������� ������ (��������������)            
        return 2 * (a + b);
    }

    //����������� � ���������� (���������������� �����������)

    Rectangle(double side_a, double side_b)
        : a(side_a), b(side_b) {}

    //������
    double getA() const {
        return this->a;
    };

    double getB() const {
        return this->b;
    };
};

#endif