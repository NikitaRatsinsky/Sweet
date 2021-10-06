#pragma once
#include <string> //дл€ работы с классом string
#include <cstdint> //дл€ работы с uint64_t
class Goods {
	std::string name, date; //пол€ класса Goods. Ћежат в модификаторе private дл€ соблюдени€ инкапсул€ции.
	uint64_t price, quantity, number; //также пол€.
public: //методы дл€ работы с пол€ми класса объ€влены с модификатором public
	Goods(std::string, std::string, uint64_t, uint64_t, uint64_t); //конструктор, принимающий на вход все переменные дл€ создани€ объекта и записывающий их в соответственные пол€

	void changePrice(uint64_t); //функци€ изменени€ цены, работающа€ через простое присвоение

	void changeQuantity(uint64_t);//изменение количества товара, также присвоение

	uint64_t countCost(); //подсчет общей стоимости. цена одного товара умножаетс€ на количество товара на складе

	std::string toString(); //преобразование общей стоимости в строку. »спользуетс€ метод класса string

	uint64_t getPrice(); //функци€ получени€ цены одного товара дл€ демонстрации работы функции changePrice()

	uint64_t getQuantity(); //получение количества товара дл€ демонстрации работы функции changeQuantity()

};