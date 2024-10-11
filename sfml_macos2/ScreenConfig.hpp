#ifndef SCREEN_CONFIG_HPP
#define SCREEN_CONFIG_HPP

#include <SFML/Graphics.hpp>
#include <memory>

class ScreenConfig
{
public:
  static std::unique_ptr<sf::RenderWindow> createWindow(unsigned int width = 800, unsigned int height = 600, const std::string &title = "SFML Application");
  static void setFullscreen(sf::RenderWindow &window, bool fullscreen);
  static void toggleFullscreen(sf::RenderWindow &window);

private:
  static sf::VideoMode getDesktopMode();
};

#endif // SCREEN_CONFIG_HPP