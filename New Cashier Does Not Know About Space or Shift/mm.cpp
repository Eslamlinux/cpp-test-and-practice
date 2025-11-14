/*
Some new cashiers started to work at your restaurant.

They are good at taking orders, but they don't know how to capitalize words, or use a space bar!

All the orders they create look something like this:

"milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza"

The kitchen staff are threatening to quit, because of how difficult it is to read the orders.

Their preference is to get the orders as a nice clean string with spaces and capitals like so:

"Burger Fries Chicken Pizza Pizza Pizza Sandwich Milkshake Milkshake Coke"

The kitchen staff expect the items to be in the same order as they appear in the menu.

The menu items are fairly simple, there is no overlap in the names of the items:

1. Burger
2. Fries
3. Chicken
4. Pizza
5. Sandwich
6. Onionrings
7. Milkshake
8. Coke
*/

#include <iostream>
#include <string>
#include <algorithm>

	std::string get_order(const std::string &order) {
		std::string Main_Menu[8] = {"Burger","Fries","Chicken","Pizza","Sandwich","Onionrings","Milkshake","Coke"};
		std::string result;
		std::string temp;
 		for(int i = 0; i < 8; i++)
		{
			temp = tolower(Main_Menu[i]);
			auto comp = std::find(order.begin(),order.end(),temp);
			if(comp != order.end())
			{
				size_t pos = order.find(temp);
				while(pos != std::string::npos)
				{
					result += Main_Menu[i] + " ";
					pos = order.find(temp,pos + temp.length());
				}
			}
		}

		return result.substr(0,result.length() - 1);
	}

int main()
{
	std::string re = "milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza";
 std::cout << get_order(re);

 return 0;
}
