#include <stdio.h>
#include <math.h>

/*
Write a C++ program that will ask the user to input the following:
    • Original price of an item
    • Mark-up percentage (e.g., 20 means 20% increase over original price)
    • Sales tax percentage 
    • Store monthly expenses:
    • Rent
    • Electricity bill
    • Water bill
    • Merchandise cost (total cost of items in stock)
    • Employee salary
Note: 
    • The sales tax is not included in the profit (it is added only to the selling price).
    • The output format will be two (2) decimal places only.
*/

struct UserInput {
	float item_original_price;
	float markup_percentage; 
	float sales_tax_percentage; 
	//Monthly Expenses
	float rent;
	float electricity_bill;
	float water_bill;
	float merchandise_cost;
	float employee_salaries;
	int item_amount_sold_this_month;
};

struct UserInput user_input;

void get_user_input() {
	printf("original price of an item: Php ");
	scanf("%f", &user_input.item_original_price);
	printf("markupsfsfjdkjfsakfjfjjjj percentage (for ex: 20 means 20%%): ");
	scanf("%f", &user_input.markup_percentage);
	printf("sales tax percentage (for ex: 12 means 12%%): ");
	scanf("%f", &user_input.sales_tax_percentage);
	printf("\n");
	printf("proceeding to monthly expenses ...\n");
	printf("\n");
	printf("montly cost of rent: Php");
	scanf("%f", &user_input.rent);
	printf("montly cost of electricity: Php");
	scanf("%f", &user_input.electricity_bill);
	printf("montly cost of water: Php");
	scanf("%f", &user_input.water_bill);
	printf("montly cost of merchandise: Php");
	scanf("%f", &user_input.merchandise_cost);
	printf("montly cost of employee salaries: Php");
	scanf("%f", &user_input.employee_salaries);
	printf("amount of item sold this month: ");
	scanf("%d", &user_input.item_amount_sold_this_month);
}
float get_total_store_expense(struct UserInput user_input) {
	float total_store_expense = user_input.rent + user_input.electricity_bill + user_input.water_bill + user_input.merchandise_cost + user_input.employee_salaries;
	return total_store_expense;	
}


int get_breakeven_quantity() {
	float total_store_expense = get_total_store_expense(user_input);
	float item_selling_price = get_item_selling_price(user_input);
	int breakeven_quantity = total_store_expense / item_selling_price;
	return ceil(breakeven_quantity);

float get_item_selling_price(struct UserInput user_input) {
	float markup = user_input.markup_percentage / 100 * user_input.item_original_price; 
	//printf("\n markup: %.2f", markup);
	float sales_tax = user_input.sales_tax_percentage / 100 * user_input.item_original_price; 
	//printf("\n salex tax: %.2f", sales_tax);
	float item_selling_price = user_input.item_original_price + markup + sales_tax;
	return item_selling_price;
} 

float get_total_store_expense(struct UserInput user_input) {
	float total_store_expense = user_input.rent + user_input.electricity_bill + user_input.water_bill + user_input.merchandise_cost + user_input.employee_salaries;
	return total_store_expense;	
}


int get_breakeven_quantity() {
	float total_store_expense = get_total_store_expense(user_input);
	float item_selling_price = get_item_selling_price(user_input);
	int breakeven_quantity = total_store_expense / item_selling_price;
	return ceil(breakeven_quantity);
} 

float get_store_netprofit(struct UserInput user_input) {
	float total_store_expense = get_total_store_expense(user_input);
	float item_selling_price = get_item_selling_price(user_input);
	float total_profit = user_input.item_amount_sold_this_month * item_selling_price;
	float store_netprofit = total_profit - total_store_expense;
	return store_netprofit;
}

void output_data(struct UserInput user_input) {
	float item_selling_price = get_item_selling_price(user_input);	
	float total_store_expense = get_total_store_expense(user_input);
	int breakeven_quantity = get_breakeven_quantity();
	float store_netprofit = get_store_netprofit(user_input);
	
	printf("\n--------------------------------------\n");	
	printf("\n item selling price: %2.f", item_selling_price);
	printf("\n total store expense: %2.f", total_store_expense);
	printf("\n breakeven quantity: %d", breakeven_quantity);
	printf("\n store netprofit: %2.f\n", store_netprofit);
}


int main() {
	get_user_input();
	output_data(user_input);
	get_item_selling_price(user_input);
	get_total_store_expense(user_input);
	get_breakeven_quantity();
	get_store_netprofit(user_input);
	return 0;	
}
