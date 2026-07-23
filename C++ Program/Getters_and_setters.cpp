#include <iostream>

using namespace std;

class Stove{
    private: //can't be changed by equaling arguments in main(EX.stove.temperature = 100000;)
        int temperature = 0;
    
    public:
    Stove(int temperature){
        setTemperature(temperature);
    }

    int getTemperature(){  // READABLE
        return temperature;
    }

    void setTemperature(int temperature){  //WRITABLE
        if (temperature < 0){
            this->temperature = 0;
        }
        else if (temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
        
};

int main(){

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE

    Stove stove(0);

    stove.setTemperature(5);

    cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}