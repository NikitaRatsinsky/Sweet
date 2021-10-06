#pragma once
Goods::Goods(std::string name1, std::string d, uint64_t p, uint64_t q, uint64_t number1) : name{ name1 }, date{ d }, price{ p }, quantity{ q }, number{ number1 }
{}

void Goods::changePrice(uint64_t newPrice) {
	price = newPrice;
}

void Goods::changeQuantity(uint64_t newQuantity) { 
	quantity = newQuantity;
}

uint64_t Goods::countCost() {
	uint64_t result = price * quantity;
	return result;
}

std::string Goods::toString() {
	std::string result = std::to_string(countCost());
	return result;
}
uint64_t Goods::getPrice() {
	return price;
}
uint64_t Goods::getQuantity() {
	return quantity;
}