#include <SFML/Graphics.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(500, 500), "Quad Generator");
    
    ConvexShape convex;
    convex.setPointCount(4);
    convex.setPoint(0, Vector2f(0, 0));
    convex.setPoint(1, Vector2f(100,200));
    convex.setPoint(2, Vector2f(20, 300));
    convex.setPoint(3, Vector2f(100, 10));
    convex.setPoint(4, Vector2f(100, 50));
    convex.setFillColor(Color::Red);
    View view1(FloatRect(0, 0, 0, 0));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.setFramerateLimit(60);
        window.clear();
        window.draw(convex);
        window.display();
    }

    return 0;
}
