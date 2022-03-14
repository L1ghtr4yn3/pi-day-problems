#include <SFML/Graphics.hpp>
#include<iostream>
#include<math.h>
using namespace std;

void area();

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;
    sf::CircleShape circle2;

    int xpos = 0;
    int ypos = 0;
    int xpos2 = 25;
    int ypos2 = 25;
    int size = 50;
    int size2 = 25;
    area();

    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                circle.setRadius(size);
                circle.setFillColor((sf::Color(100, 0, 200, 100)));
                circle.setPosition(xpos + i * 100, ypos + j * 100);
                window.draw(circle);
                circle2.setRadius(size2);
                circle2.setFillColor((sf::Color(150, 50, 75, 100)));
                circle2.setPosition(xpos2 + i * 100, ypos2 + j * 100);
                window.draw(circle2);


            }
        }

        window.display();

    }//end game loop-------------------------------------------------

    return 0;
} //end main
void area() {
    int size = 50;
    int size2 = 25;
    float pi = 3.14159;
    float fc = pi * (size * size);
    float oc = pi * (size2 * size2);
    float pr = fc - oc;
    cout << pr << endl;
    cout << oc << endl;
    float bp = (800 * 800) - (fc * 64);
    cout << bp << endl;

}
