#include <iostream>
#include <windows.h>
using namespace std;

class Shape
{
private:
	string name;
public:
	Shape()
	{
		name = "no name";

	}
    Shape(string n)
	{
		name = n;	
	}

	void Print()
	{
		cout << "Name " << name << endl;
	}

    void PrintFigura()
    {
        cout << char(201);

        for (int i = 0; i < 17; i++)
        {
            cout << char(205);

        }
        cout << "Figura";

        for (int i = 0; i < 17; i++)
        {
            cout << char(205);

        }
        cout << char(187) << endl;
    }

};
class Kvadrat : public Shape
{
private:
    int dovgina;
    int shurina;

public:
    Kvadrat():Shape()
    {
        dovgina = 0;
        shurina = 0;
    }

    void WriteDaniKvadrat()
    {
        cout << "Enter a dovgina = ";
        cin >> dovgina;

        cout << "Enter a shurina = ";
        cin >> shurina;

        cout << "Dovgina = " << dovgina << endl;
        cout << "Shurina = " << shurina << endl;

        FindPerimetr();
    }

    void FindPerimetr()
    {
        if (dovgina > 0 && shurina > 0)
        {
            int summa = (dovgina + shurina) * 2;

            cout << "Perimetr = " << summa << endl;
        }


        if (dovgina > 0 && shurina > 0)
        {
            int plosha = (dovgina * shurina);

            cout << "Plosha = " << plosha << endl;
        }

        else
        {
            cout << "Incorrect data!" << endl;
        }
    }
};

class Colo : public Shape
{
private:
    int radius;
    int diametr;
    float p = 3.14;
public:
    Colo() :Shape()
    {
        radius = 0;
    }
    Colo()
    {
        this->radius = radius;
    }

    void WriteDaniColo()
    {
        cout << "Enter a radius" << endl;
        cin >> radius;

        cout << "Enter a diametr" << endl;
        cin >> diametr;

        diametr = radius * 2;


        cout << "Radius = " << radius << endl;
        cout << "Diametr = " << diametr << endl;
    }

    void Obcgislenya(int r, float p)
    {
        if (radius < 0)
        {
            cout << "Error " << endl;
        }

        int dovginakola = 2 * (radius * p);

        cout << "Dovgina = " << dovginakola << endl;


        int plosha = (radius * radius * p);
        cout << "Plosha = " << plosha << endl;
    }


};



int main()
{
    SetConsoleOutputCP(437);



    
}




//class Car
//{
//private:
//    string model;
//    int year;
//
//protected:
//    int speed;
//    float volume;
//
//public:
//    Car()
//        : model("no model"), year(0), speed(0), volume(0) {
//    }
//
//    Car(string m, int y, float v)
//        : model(m), year(y), speed(0), volume(v) {
//    }
//
//    virtual void Drive()
//    {
//        cout << "I am a Car! I can drive "
//            << speed << " km/h" << endl;
//    }
//
//    void setSpeed(int speed)
//    {
//        if (speed > 0)
//            this->speed = speed;
//        else
//            this->speed = 0;
//    }
//
//  void Print() const
//    {
//        cout << "---------Car--------" << endl;
//        cout << "Model: " << model << endl;
//        cout << "Year: " << year << endl;
//        cout << "Speed: " << speed << " km/h" << endl;
//        cout << "Volume: " << volume << " L" << endl;
//    }
//
//
//};
//
//class Policecar : public Car
//{
//private:
//    int soundVolume;
//
//public:
//    Policecar()
//        : Car(), soundVolume(0) {
//    }
//
//    Policecar(string n, int y, float v, int sound)
//        : Car(n, y, v), soundVolume(sound) {
//    }
//
//    void Drive() override
//    {
//        cout << "I am a Police Car! I can drive "
//            << speed << " km/h" << endl;
//    }
//
//    void Print() const override
//    {
//        Car::Print();
//        cout << "Sound Volume: " << soundVolume << " db" << endl;
//    }
//
//    void BeepBeep()
//    {
//        cout << "POLICE SIREN: BEEP BEEP!" << endl;
//    }
//};
//
//
//class SportCar : public Car
//{
//private:
//    int turbospeed;
//
//public:
//    SportCar()
//        : Car(), turbospeed(0) {
//    }
//
//    SportCar(string n, int y, float v, int turbo)
//        : Car(n, y, v), turbospeed(turbo) {
//    }
//
//    void Drive() override
//    {
//        cout << "I am a Sport Car! I can drive "
//            << speed << " km/h" << endl;
//    }
//
//    void Print() const override
//    {
//        Car::Print();
//        cout << "Turbo Speed: " << turbospeed << " km/h" << endl;
//    }
//
//    void Nitro()
//    {
//        speed += turbospeed;
//
//        cout << "NITRO ACTIVATED!" << endl;
//        cout << "New Speed: " << speed << " km/h" << endl;
//    }
//};
//
//
//void testDrive(Car& car)
//{
//    car.setSpeed(70);
//    car.Drive();
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(65001);
//    SetConsoleCP(65001);
//
//    Car car("BMW", 2024, 3.0);
//
//    car.setSpeed(200);
//    car.Drive();
//    car.Print();
//
//    cout << "\n----------------------------\n";
//
//    Policecar police("Renault Duster", 2015, 1.6, 500);
//
//    police.setSpeed(220);
//    police.Drive();
//    police.Print();
//    police.BeepBeep();
//
//    cout << "\n----------------------------\n";
//
//    SportCar sport("Formula 1", 2025, 2.5, 100);
//
//    sport.setSpeed(150);
//    sport.Drive();
//    sport.Print();
//    sport.Nitro();
//
//    cout << "\n----------------------------\n";
//
//    cout << "TEST DRIVE" << endl;
//
//    testDrive(car);
//    testDrive(police);
//    testDrive(sport);
//
//    Car* cars[3]{
//        new Car("BMW", 2024, 3.0),
//        new Policecar("Renault Duster", 2015, 1.6, 500),
//        new SportCar("Formula 1", 2025, 2.5, 100)
//    };
//
//    for (int i = 0; i < 3; i++)
//    {
//        cars[i]->Drive();
//        cars[i]->Drive();
//        delete cars[i];
//    }
//
//
//
//
//
//}



