#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std::this_thread;
using namespace std::chrono;
using namespace std;

class SimonSays
{
public:
    int allNumbers;
    void printNumbers();
    void addNumber();
    void init();
    void update();

private:
    
};

int allNumbers = 0;
SimonSays ss;

int main()
{
    ss = SimonSays();
    ss.init();
    while (true)
    {
        ss.update();
    }
    return 0;
}

void SimonSays::init()
{
    allNumbers = 0;
    srand(time(NULL));
    ss.addNumber();
    ss.addNumber();
}

void SimonSays::update()
{
    ss.addNumber();
    ss.printNumbers();
    sleep_for(milliseconds(2000));
    system("CLS");

    int x;
    cin >> x;

    if (x != allNumbers)
    {
        init();
    }
}

void SimonSays::printNumbers()
{
    cout << allNumbers;
}

void SimonSays::addNumber()
{
    int testNumbers = allNumbers;
    testNumbers *= 10;
    if (testNumbers < 0)
    { 
        cout << "You win! (underflow error)";
        init();
        return;
    }
    else
    {
        allNumbers *= 10;
        allNumbers += rand() % 10;
    }
}