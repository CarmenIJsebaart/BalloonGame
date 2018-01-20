#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
  // The game window
  sf::RenderWindow window(sf::VideoMode(800, 600), "BalloonGame",
    sf::Style::Titlebar | sf::Style::Close);

  // Set desert as background
  sf::Texture texture;
  if (!texture.loadFromFile("Sand.jpg"))
  {
    std::cout << "Can't find Sand.jpg";
  }

  sf::Sprite background(texture);

  // Run the program while the window is open
  while (window.isOpen())
  {
    // Check all events
    sf::Event event;
    while (window.pollEvent(event))
    {
      // "Close requested" event: close the window
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    // Clear the window with yellow color
    window.clear();

    // Draw backrground
    window.draw(background);

    // End the current frame
    window.display();
  }

  return 0;
}

