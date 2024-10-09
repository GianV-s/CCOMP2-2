#include <iostream>
#include <string>

using namespace std;

class Invoice
{
public:
    explicit Invoice(string Members, string Description, int Quantity, int Price)
        :members{Members},description{Description},vat{0.20},discount{0.00}
        {
            if (Quantity > 0){
                quantity = Quantity;
            }
            else{
                quantity = 1;
            }
        }
    void setMembers(){
        cout << "\ningrese los miembros: ";
        string Members;
        getline(cin, Members);
        members = Members;
    }
    void setDescription(){
        cout << "\ningrese la descripcion: ";
        string Description;
        getline(cin, Description);
        description = Description;
    }
    void setQuantity(){
        cout << "\ningrese la cantidad: ";
        int Quantity;
        cin >> Quantity;
        if (Quantity > 0){
            quantity = Quantity;
        }
    }
    void setPrice(){
        cout << "\ningrese el precio: ";
        int Price;
        cin >> Price;
        if (Price > 0){
            price = Price;
        }
    }
    void setVAT(){
        cout << "\ningrese el VAT: ";
        double VAT;
        cin >> VAT;
        if (VAT > 0){
            vat = VAT;
        }
    }
    void setDiscount(){
        cout << "\ningrese el descuento: ";
        double Discount;
        cin >> Discount;
        if (Discount > 0){
            discount = Discount;
        }
    }
    string getMembers(){
        return members;
    }
    string getDescription(){
        return description;
    }
    int getQuantity(){
        return quantity;
    }
    int getPrice(){
        return price;
    }
    double getVAT(){
        return vat;
    }
    double getDiscount(){
        return discount;
    }

private:
    string members;
    string description;
    int quantity;
    int price;
    double vat;
    double discount;

};
