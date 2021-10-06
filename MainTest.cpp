#include <iostream> //библиотека для ввода/вывода в консоль
#include <windows.h> //для вывода на русском
#include <string> //для работы с классом string
#include <cstdint> //для работы с uint64_t
#include "Header1.h"
#include "Header2.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Goods object1("Milk", "15.05.2021", 60, 200, 348701);
	std::cout << "Подсчет общей стоимости: " << object1.countCost() << std::endl;
	std::cout << "Старая цена товара: " << object1.getPrice() << std::endl;
	std::cout << "Введите новую стоимость товара: ";
	uint64_t newPrice;
	std::cin >> newPrice;
	object1.changePrice(newPrice);
	std::cout << "Новая стоимость товара: " << object1.getPrice() << std::endl;
	std::cout << "Старое количество товара на складе: " << object1.getQuantity() << std::endl;
	std::cout << "Введите новое количество товара: ";
	uint64_t newQuantity;
	std::cin >> newQuantity;
	object1.changeQuantity(newQuantity);
	std::cout << "Новое количество товара: " << object1.getQuantity() << std::endl;
	return 0;
}
