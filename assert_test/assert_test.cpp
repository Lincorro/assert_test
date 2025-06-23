// assert_test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {

    assert(speed > 0 && "Speed must be positive");

    return distance / speed;
}

int main()
{
    float speed = 0;
    float distance = 0;
    std::cout << "Input Speed and distance \n";
    std::cout << "Speed: ";
    std::cin >> speed;
    std::cout << "\nDistance: ";
    std::cin >> distance;

    std::cout << "Time = " << travelTime (distance, speed) ;
}
