// Passing pointers to arrays
#include <iostream>
#include <string>
using namespace std;


class Car {
   
    private:
        int speed = 0;
   
   
    public:
        string brand;
        
        void vroom(){
            cout << "Vroom Vroom" << endl;
        }
        
        void printBrand(){
            cout << "The brand is: " << brand << endl;
        }
        
        void increaseSpeed(int increment){
            speed = speed + increment;
        }
        
        void printSpeed(){
            cout << "The speed is: " << speed << endl;
        }
       
};

int main()
{
    Car myCar;
    myCar.brand = "Toyota";
    myCar.printBrand();
    myCar.printSpeed();
    myCar.increaseSpeed(10);
    myCar.printSpeed();
    myCar.vroom();
    return 0;
}

#include <iostream>
using namespace std;


// Basic syntax of a class
class ClassName{
    // Public members
    public:
        void publicOutput(){
            cout << "void" << endl;
        }
        
    private:
        int privateOutput;
        
};

int main(){
    ClassName myClass;
    myClass.publicOutput();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Create a class called Car
// It should have one private variable: year
// It should have two public variables make and model
// It should have a public function to getYear
// It should a public function to display the info of the car
// It should have a public function to set the year of the car. Add a check and only allow
// the year to be updated if it is in the range of 1950 to 2024. If not output an error.

class Car {
    private:
        int year;
        
    public:
        string make;
        string model;
        
        int getYear(){
            return this->year;
        }
        
        void displayInfo(){
            cout << "The year: " << this->year << " " << "The make: " << this->make << "The model: " << this->model << endl;
        }
        
        void setYear(int givenYear){
            if(givenYear >= 1960 && givenYear <= 2024){
                this->year = givenYear;
            } else{
                cout << "Invalid Year." << endl;
            }
        }


};


int main() {
	// Create a car object. Call it car 1
    Car car1;
    
	// Set the make and model for it.
    car1.make = "Toyota";
    car1.model = "Corolla";

	// Try to update the year with a invalid year.
    car1.setYear(1800);
	// Update the year with a valid year.
    car1.setYear(2000);


	// Display the information
    car1.displayInfo();



	// Create another car object. Call it car 2.
    Car car2;

	// Set the year to 2021
    car2.setYear(2021);

	// Display the information
	car2.model = "Mustang";
	car2.make = "Ford";
	car2.displayInfo();

}