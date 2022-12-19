#include <iostream>

using namespace std;

class AbstractShop{
    protected:
        string Name;
        
    public:
        
        AbstractShop(string Name){
            this->Name = Name;
        }
        
        string getName(){
            return Name;
        }
        
        void setName(string Name){
            this->Name = Name;
        }
        
        virtual void soldProduct()=0;
};


class Drinks: public AbstractShop{
    float DrinkPrice = 2.5;
    
    public:
        static int QuantityOfDrinks;
        
        Drinks(string Name): AbstractShop(Name){}
        
        float getDrinkPrice(){
            return DrinkPrice;
        }
        
        void setDrinkPrice(float DrinkPrice){
            this->DrinkPrice - DrinkPrice;
        }
        
        void soldProduct(){
            if(QuantityOfDrinks > 0){
                cout << "1 bottle of " << getName() << " has been sold and each of the bottle's price is: " << getDrinkPrice() <<endl;
                QuantityOfDrinks--;
                cout << QuantityOfDrinks << " bottles of " << Name << " has left"<< endl;
                cout << endl;
            } else {
                cout << "Drinks sold out" << endl;
                cout << endl;
            }
        }
        
        
};

int Drinks:: QuantityOfDrinks = 10;


class Ciggaretes: public AbstractShop{
    float CiggaretesPrice = 6.5;
    
    public:
        static int QuantityOfCiggaretes;
        
        Ciggaretes(string Name): AbstractShop(Name){}
        
        float getCiggaretesPrice(){
            return CiggaretesPrice;
        }
        
        void setCiggaretesPrice(float CiggaretesPrice){
            this->CiggaretesPrice = CiggaretesPrice;
        }
        
        void soldProduct(){
            if(QuantityOfCiggaretes > 0){
                cout << "1 pack of " << Name << " has been sold and each of the pack's price is: " << getCiggaretesPrice() <<endl;
                QuantityOfCiggaretes--;
                cout << QuantityOfCiggaretes << " packs of " << Name << " left" <<endl;
                cout << endl;
            } else {
                cout << "Ciggaretes sold out" << endl;
                cout << endl;
            }
        }
};

int Ciggaretes:: QuantityOfCiggaretes = 30;


class Snickers: public AbstractShop{
        float SnickersPrice = 1.2;
        
    public:
        static int QuantityOfSnickers;
        
        Snickers(string Name): AbstractShop(Name){}
        
        float getSnickersPrice(){
            return SnickersPrice;
        }
        
        void setSnickersPrice(float SnickersPrice){
            this->SnickersPrice = SnickersPrice;
        }
        
        void soldProduct(){
            if(QuantityOfSnickers > 0){
                cout << "1 piece of " << Name << " has been sold and each of the snickers's price is: " << getSnickersPrice() <<endl;
                QuantityOfSnickers--;
                cout << QuantityOfSnickers << " peices of " << Name << " left" << endl;
                cout << endl;
            } else{
                cout << "Snickers sold out" << endl;
                cout << endl;
            }
        }
};

int Snickers:: QuantityOfSnickers = 30;

int main()
{
    Drinks drink("Cola");
    drink.soldProduct();
    
    Ciggaretes cig("Parliament");
    cig.soldProduct();
    
    Snickers snic("Snickers");
    snic.soldProduct();

    return 0;
}

