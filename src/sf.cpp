#include <SFML/Graphics.hpp>
 #include<iostream>
int main()
{
    sf::Clock clock;
    sf::Time time=clock.getElapsedTime();
    std::cout<<"enter a value : ";
    int a;
    std::cin>>a;
    sf::Time time2=clock.getElapsedTime();
    std::cout<<"you have passed "<< int(time2.asSeconds()-time.asSeconds())<<" to enter the value.";
    return 0;
}