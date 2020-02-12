#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
 * Constructor for an inventory item.
 * Takes the item's name, price and current count.
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
 * sells one of the item
 */
void Inventory::sell()
{
	if (m_in_stock>0)
	{
  m_in_stock--;
	}
	else std::cerr << "Sorry, that item is out of stock.\n";
}

/*
 *prints the name and price of the item to the stream
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
