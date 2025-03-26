////#include <iostream>
////
////using namespace std;
////
////class Gun
////{
////public:
////	virtual void Shoot()
////	{
////		cout << "PEW! " << endl;
////	}
////
////};
////
////class Handgun : public Gun
////{
////public:
////	virtual void Shoot() override
////	{
////		cout << "PEW! PEW! POOF!" << endl;
////	}
////};
////
////class Player
////{
////public:
////	void Shoot(Gun* gun)
////	{
////		cout << "ГОТОВЛЮСЬ СТРЕЛЯТЬ" << endl;
////		gun->Shoot();
////	}
////};
////int main() {
////
////	setlocale(LC_ALL, "Ru");
////
////	Gun gun;
////	Handgun usp;
////
////	Player player;
////
////	player.Shoot(&usp);
////
////}
// 
// 
//#include <iostream>
//#include <vector>
//using namespace std;
//template <typename T> 
//class A {
//protected:
//    T* A;
//
//public:
//    more(T* A)
//    {
//        this->A = A;
//    }
//
//    ~more()
//    {
//        delete A;
//    }
//    T& operator* ()
//    {
//        return *A;
//    }
//};
//
//
//
//int main() {
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    vector<more<int>> arr{ &a, &b, &c };
//    for (size_t i = 0; i < 3; ++i)
//    {
//        cout << *arr[i] << " ";
//    }
//}


//#include <iostream>
//#include <memory>  
//using namespace std;
//int main() {
//    setlocale(LC_ALL, "RU");
//    int size;
//    cout << "Введите размер массива: ";
//    cin >> size;
//
//
//    unique_ptr<int[]> arr(new int[size]);
//
//
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        arr[i] = i * i;
//        sum += arr[i];
//    }
//
//
//    cout << "Сумма элементов массива: " << sum << endl;
//}


////#include <iostream>
////#include <string>
////using namespace std;
////class Product {
////protected:
////    double price;
////    static double balance;
////
////public:
////    Product(double price = 0) {
////        this->price = price;
////    }
////
////    static void setBalance(double newBalance) {
////        balance = newBalance;
////    }
////
////    static double getBalance() {
////        return balance;
////    }
////
////    virtual void buy() {
////        if (balance >= price) {
////            balance -= price;
////            cout << "Покупка успешна! Остаток на балансе: " << balance << endl;
////        }
////        else {
////            cout << "Недостаточно средств для покупки!" << endl;
////        }
////    }
////
////    virtual string getName() const = 0;
////};
////
////double Product::balance = 0.0;
////
////class Chocolate : public Product {
////public:
////    Chocolate(double price) : Product(price) {}
////
////    void buy() override {
////        Product::buy();
////    }
////
////    string getName() const override {
////        return "Шоколадка";
////    }
////};
////
////class Jeans : public Product {
////public:
////    Jeans(double цена) : Product(цена) {}
////
////    void buy() override {
////        Product::buy();
////    }
////
////    string getName() const override {
////        return "Джинсы";
////    }
////};
////
////int main() {
////    setlocale(LC_ALL, "Ru");
////    Product::setBalance(100.0);
////
////    Chocolate Chocolate(25.0);
////    Jeans Jeans(50.0);
////
////    cout << "Покупаем: " << Chocolate.getName() << endl;
////    Chocolate.buy();
////
////    cout << "Покупаем: " << Jeans.getName() << endl;
////    Jeans.buy();
////
////}
//
//
////#include <iostream>
////#include <string>
////using namespace std;
////class Validator {
////public:
////    virtual bool check(const string& str) const = 0; 
////
////};
////
////class LengthValidator : public Validator {
////private:
////    size_t minLength;
////    size_t maxLength;
////
////public:
////    LengthValidator(size_t minLen, size_t maxLen) : minLength(minLen), maxLength(maxLen) {}
////
////    bool check(const string& str) const override {
////        return str.length() >= minLength && str.length() <= maxLength;
////    }
////};
////
////class CharacterValidator : public Validator {
////private:
////    string allowedCharacters;
////
////public:
////    CharacterValidator(const string& allowedChars) : allowedCharacters(allowedChars) {}
////
////    bool check(const string& str) const override {
////        for (char ch : str) {
////            if (allowedCharacters.find(ch) == string::npos) {
////                return false; 
////            }
////        }
////        return true; 
////    }
////};
////
////int main() {
////   setlocale(LC_ALL, "Ru");
////    LengthValidator lengthValidator(3, 10);
////    CharacterValidator characterValidator("abcde");
////
////    string testString1 = "hello";
////    string testString2 = "hi";
////    string testString3 = "hello123";
////
////    cout << "Проверка длины строки "" << testString1 << "": "
////        << (lengthValidator.check(testString1) ? "Успешно" : "Неуспешно") << endl;
////
////    cout << "Проверка длины строки "" << testString2 << "": "
////        << (lengthValidator.check(testString2) ? "Успешно" : "Неуспешно") << endl;
////
////    cout << "Проверка символов строки "" << testString1 << "": "
////        << (characterValidator.check(testString1) ? "Успешно" : "Неуспешно") << endl;
////
////    cout << "Проверка символов строки "" << testString3 << "": "
////        << (characterValidator.check(testString3) ? "Успешно" : "Неуспешно") << endl;
////}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Checker {
//public:
//    virtual bool check(string str) = 0;
//};
//
//class EvenLengthChecker : public Checker {
//public:
//    bool check(string str) override {
//        return str.length() % 2 == 0;
//
//    }
//};
//
//class DigitCheker : public Checker {
//public:
//    bool check(string str) override {
//        for (char ch : str) {
//            if (isdigit(ch)) {
//                return false;
//            }
//        }
//    }
//
//};
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    EvenLengthChecker evenChecker;
//    DigitCheker digitChecker;
//
// 
//    string str1 = "HelloWorld";
//    string str2 = "Hello123";
//    string str3 = "C++";
//
//    cout << "EvenLengthChecker:" << endl;
//    cout << "'" << str1 << "' имеет даже длину: " << evenChecker.check(str1) << endl;
//    cout << "'" << str1 << "' имеет даже длину: " << evenChecker.check(str2) << endl;
//    cout << "'" << str1 << "' имеет даже длину: " << evenChecker.check(str3) << endl;
//
//    cout << "\nDigitChecker:" << endl;
//    cout << "'" << str1 << "' содержит цифры: " << digitChecker.check(str1) << endl;  
//    cout << "'" << str2 << "' содержит цифры: " << digitChecker.check(str2) << endl;  
//    cout << "'" << str3 << "' содержит цифры: " << digitChecker.check(str3) << endl;  
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Vehicle {
//protected:
//   string type;
//
//public:
//    Vehicle(const string& type) : type(type) {
//        cout << "Создано транспортное средство: " << type << endl;
//    }
//
//    virtual ~Vehicle() {
//        cout << "Уничтожено транспортное средство: " << type << endl;
//    }
//
//    virtual void drive() const = 0; 
//};
//
//
//class Car : public Vehicle {
//private:
//    string model;
//
//public:
//    Car(const string& model) : Vehicle("Car"), model(model) {
//        cout << "Автомобиль создан: " << model << endl;
//    }
//
//    ~Car() override {
//        cout << "Автомобиль уничтожен: " << model << endl;
//    }
//
//    void drive() const override {
//        cout << "Вождение автомобиля: " << model << endl;
//    }
//};
//
//
//class Bike : public Vehicle {
//private:
//    string brand;
//
//public:
//    Bike(const string& brand) : Vehicle("Bike"), brand(brand) {
//        cout << "Велосипед создан: " << brand << endl;
//    }
//
//    ~Bike() override {
//        cout << "Велосипед уничтожен: " << brand << endl;
//    }
//
//    void drive() const override {
//        cout << "Езда на велосипеде: " << brand << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    vector<Vehicle*> vehicles;
//
//    vehicles.push_back(new Car("Toyota Corolla"));
//    vehicles.push_back(new Bike("Harley Davidson"));
//    vehicles.push_back(new Car("Tesla"));
//    vehicles.push_back(new Bike("Yamaha"));
//
//    
//    for (const auto& vehicle : vehicles) {
//        vehicle->drive();
//    }
//
//   
//    for (auto& vehicle : vehicles) {
//        delete vehicle;
//    }
//}
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Vehicle {
//protected:
//    string type;
//
//public:
//    Vehicle(const string& type) : type(type) {
//        cout << "Создано транспортное средство: " << type << endl;
//    }
//
//
//    virtual ~Vehicle() = 0;
//
//    virtual void drive() const = 0; 
//};
//
//
//Vehicle::~Vehicle() {
//    cout << "Уничтожено транспортное средство: " << type << endl;
//}
//
//
//class Car : public Vehicle {
//private:
//    string model;
//
//public:
//    Car(const string& model) : Vehicle("Car"), model(model) {
//        cout << "Автомобиль создан: " << model << endl;
//    }
//
//    ~Car() override {
//        cout << "Автомобиль уничтожен " << model << endl;
//    }
//
//    void drive() const override {
//        cout << "Вождение автомобиля: " << model << endl;
//    }
//};
//
//
//class Bike : public Vehicle {
//private:
//    string brand;
//
//public:
//    Bike(const string& brand) : Vehicle("Bike"), brand(brand) {
//        cout << "Велосипед создан: " << brand << endl;
//    }
//
//    ~Bike() override {
//        cout << "Велосипед уничтожен: " << brand << endl;
//    }
//
//    void drive() const override {
//        cout << "Езда на велосипеде: " << brand << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    vector<Vehicle*> vehicles;
//
//
//    vehicles.push_back(new Car("Toyota Corolla"));
//    vehicles.push_back(new Bike("Harley Davidson"));
//    vehicles.push_back(new Car("Tesla"));
//    vehicles.push_back(new Bike("Yamaha"));
//
// 
//    for (const auto& vehicle : vehicles) {
//        vehicle->drive();
//    }
//
//
//    for (auto& vehicle : vehicles) {
//        delete vehicle;
//    }
//
//}

//#include <iostream>
//using namespace std;
//
//
//class ElectricVehicle {
//protected:
//    int batteryLevel;
//
//public:
//
//    ElectricVehicle(int batteryLevel)
//    {
//        this->batteryLevel = batteryLevel;
//    }
//
//
//    void charge(int amount)
//    {
//        batteryLevel += amount;
//        cout << "Батарея увеличена на" << amount << "%. Текущий уровень: " << batteryLevel << "%" << endl;
//    }
//
//
//
//
//    virtual void showBattery() const {  
//        cout << "Текущий уровень Батарей: " << batteryLevel << "%" << endl;
//    }
//};
//
//
//class LandTransport {
//protected:
//    int speed;
//
//public:
//
//    LandTransport(int speed)
//    {
//        this->speed = speed;
//    }
//
//    virtual void accelerate(int value) {  
//        speed += value;
//        cout << "Скорость увеличена до " << speed << " km/h" << endl;
//    }
//
//    virtual void brake(int value) {  
//        speed -= value;
//        if (speed < 0) {
//            speed = 0;
//        }
//        cout << "Скорость снизилась до " << speed << " km/h" << endl;
//    }
//};
//
//
//class WaterTransport {
//protected:
//    int depth;
//
//public:
//
//    WaterTransport(int depth)
//    {
//        this->depth = depth;
//    }
//
//    virtual void dive(int value) {  
//        depth += value;
//        cout << "Дайвинг в " << depth << " метров" << endl;
//    }
//
//    virtual void surface(int value) {  
//        depth -= value;
//        if (depth < 0) {
//            depth = 0;
//        }
//        cout << "Всплытие на поверхность " << depth << " метров" << endl;
//    }
//};
//
//
//class ElectricCar : public ElectricVehicle, public LandTransport {
//public:
//
//    ElectricCar(int batteryLevel, int speed) : ElectricVehicle(batteryLevel), LandTransport(speed) {}
//
//    void drive()
//    {
//        cout << "скорость электромобиля " << speed << " км/ч" << endl;
//    }
//};
//
//class ElectricBoat : public ElectricVehicle, public WaterTransport {
//public:
//    ElectricBoat(int batteryLevel, int depth) : ElectricVehicle(batteryLevel), WaterTransport(depth) {}
//
//
//    void sail()
//    {
//        cout << "скорость электролодки " << depth << " м" << endl;
//    }
//};
//
//class AmphibiousVehicle : public ElectricCar, public ElectricBoat {
//private:
//    bool isLandMode;
//
//public:
//
//    AmphibiousVehicle(int batteryLevel, int speed, int depth) : ElectricCar(batteryLevel, speed), ElectricBoat(batteryLevel, depth) {}
//
//
//    void switchToLandMode() {
//        isLandMode = true;
//        cout << "Амфибия переключена в наземный режим." << endl;
//    }
//
//    void switchToWaterMode() {
//        isLandMode = false;
//        cout << "Амфибия переключена в водный режим." << endl;
//    }
//
//    void move() {
//        if (isLandMode) {
//            drive();
//        }
//        else {
//            sail();
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    ElectricCar car(90, 80);
//    ElectricBoat boat(70, 90);
//    AmphibiousVehicle amphibious(92, 40, 21);
//
//    cout << "Электромобиль:" << endl;
//    car.drive();
//    car.accelerate(88);
//    car.brake(17);
//    car.showBattery();
//
//    cout << "Электролодка:" << endl;
//    boat.sail();
//    boat.dive(77);
//    boat.surface(6);
//    boat.showBattery();
//
// 
//    cout << "Амфибия:" << endl;
//    amphibious.switchToWaterMode();
//    amphibious.move();
//    amphibious.switchToLandMode();
//    amphibious.move();
//
//}





#include <iostream>

using namespace std;
class Foldable {
public:
    virtual int fold(int arr[], int size) = 0; 
    virtual int fold1(int arr[], int size) = 0; 

    virtual ~Foldable() = 0; 
};
Foldable :: ~Foldable() = default;

class SumAccumulator : public Foldable {
public:
    int fold1(int arr[], int size) override {
        cout << "Ты лох !" << endl;
    }
    int fold(int arr[], int size) override {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};
class ProductAccumulator : public Foldable {
public:
    int fold1(int arr[], int size) override {
        cout << "Ты лох !" << endl;
    }
    int fold(int arr[], int size) override {
        int product = 1;
        for (int i = 0; i < size; ++i) {
            product *= arr[i];
        }
        return product;
    }
};
int main() {
    setlocale(LC_ALL, "RU");
    int size;


    cout << "Введите размер массива: ";
    cin >> size;


    int* arr = new int[size];


    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }


        SumAccumulator sumAccumulator;
        ProductAccumulator productAccumulator;


        cout << "Сумма элементов массива: " << sumAccumulator.fold(arr, size) << endl;
        cout << "Произведение элементов массива: " << productAccumulator.fold(arr, size) << endl;


        delete[] arr;
    
}