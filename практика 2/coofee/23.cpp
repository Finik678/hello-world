#include <iostream>
#include <functional>
using namespace std;
 
    int option;
    double Latte, Chocolate, Espresso, classic coffe, total, zipcode, quantity_latte, 
           quantity_chocolate, quantity_espresso, quantity_classic coffee, payment, pin, error, tax, final_cost;
 
void menu ()
{
    cout << "Welcome to COFE  Machine.\n";
 
    do {
        cout << "Select from our menu:\n"
             << "\t1. Latte........$1.50\n"
             << "\t2. Chocolate......$2.00\n"
             << "\t3. Espresso......$1.00\n"
             << "\t4. Classic Coffe..$2.50\n"
             << "\t5. Check out\n";
 
        cout << "Enter your option: ";
        cin >> option;
 
            switch (option)
            {
            case 1:
                cout << "Quantity: ";
                cin >> quantity_chips;
                chips = (1.5 * quantity_latte);
                break;
 
            case 2:
                cout << "Quantity: ";
                cin >> quantity_milk;
                milk = (2 * quantity_chocolate);
                break;
 
            case 3:
                cout << "Quantity: ";
                cin >> quantity_cola;
                cola = (1 * quantity_espresso);
                break;
 
            case 4:
                cout << "Quantity: ";
                cin >> quantity_coffee;
                coffee = (2.5 * quantity_classic coffee);
                break;
 
            case 5:
                void checkout();        
                break;
 
            default:
            cout << "Invalid option." << endl;
             
            }           
    } while (option <5);
}
 
void checkout()
{
    if (quantity_latte > 0||quantity_chocolate > 0||quantity_espresso > 0||quantity_classic coffee > 0)
    {
        total = (latte) + (chocolate) + (espresso) + (classic coffee);
     
        if (total > 10)
        { 
            cout << "Error, you are buying too much!\n";
        }
        else
        {
            cout << "Select payment option (1:Debit 2:Credit): ";
            cin >> payment;
 
            if (payment == 1)
            {
                void debitcard();
            }
            else if (payment == 2)
            {
                void creditcard();
            }
            else
            {
                cout << "Unknown payment option, please try again.\n";
            }
        }
    }
    else
    {
        cout << "Please select at least one item.\n";
    }
}
 
void debitcard()
{
    error = 1;
 
    cout << "Enter PIN: ";
    cin >> pin;
 
    if (pin == 1234)
    {
        void receipt();
    }
    else
    {   
        while (error >= 1)
        {
            cout << "Invalid PIN. Try Again:";
            cin >> pin;
            error++;
            if (pin == 1234)
            {
                void receipt();
            }
            else
            {
                cout << "We are sorry but this is an invalid card\n"
                     << "Thank you for using us.\n"; 
                return;
            }
        }
    }
}
 
void creditcard()
{
    error = 1;
     
    cout << "Enter ZIP";
    cin >> zipcode;
 
    if (zipcode == 1234)
    {
        void receipt();
    }
    else
    {
        while (error >= 1)
        {
            cout << "Invalid ZIP. Try Again: ";
            cin >> zipcode;
            error++;
            if (zipcode == 1234)
            {
                void receipt();
            }
            else
            {
                cout << "We are sorry but this is an invalid card\n"
                     << "Thank you for using us.\n"; 
                return;
            }
        }
    }
}
 
void receipt ()
{
    cout << "This is your receipt:\n";
 
    if (quantity_latte > 0)
    {
        cout << "Latte: $1.50 x " << quantity_latte << " = $" << latte << endl;
    }
    if ( quantity_chocolate > 0)
    {
        cout << "Chocolate: $2.00 x " << quantity_chocolate << " = $" << chocolate << endl;
    }
    if (quantity_espresso > 0)
    {
        cout << "Espresso: $1.00 x " << quantity_espresso << " = $" << espresso << endl;
    }
    if ( quantity_classic coffee > 0)
    {
        cout << "Classic Coffee: $2.50 x " << quantity_classic coffee << " = $" << classic coffee << endl;
    }
 
    tax = (total * .10);
    final_cost = tax + total;
 
    cout << "Tax (10.0%): $" << tax << endl;
    cout << "Total: $" << final_cost << endl;
}
 
int main ()
{
    menu();
    checkout();
    debitcard();
    creditcard();
    receipt();
     
    return 0;
}