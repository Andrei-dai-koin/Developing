#include <iostream>
using namespace std;
class Pudge {
private:
    int Health;
    int Armour;

public:

    
    Pudge()
    {
        int Health = 0;
        int Armour = 0;

    }
    Pudge(int Health, int Armour)
    {
        
        this->Health = Health;
        this->Armour = Armour;

    }

   
    void FreshMeat(int healthIncrease, int armourIncrease) {
        Health += healthIncrease;
        Armour += armourIncrease;
        cout << "Pudge съел свежее мясо! Здоровье и броня увеличены." << endl;
    }


    void DisplayStats() const {
        cout << "Текущее состояние здоровья: " << Health << endl;
        cout << "Текущая броня: " << Armour << endl;
    }


    void GetStatus() const {
        if (Health > 0) {
            cout << "Пудж жив и готов к битве!" << endl;
        }
        else {
            cout << "Пудж упал!" << endl; 
            cout << "https://images.app.goo.gl/RHDaTHDKczuDwBYU9"; //Перейдите на ссылку
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Pudge pudge(100, 50);

  
    pudge.DisplayStats();
    pudge.GetStatus();

  
    pudge.FreshMeat(20, 10);
    
  
    pudge.DisplayStats();
    pudge.GetStatus();

  
}
