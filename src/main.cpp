#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
  std::cout << "Hello, world!\n";
  std::cout << GLFW_VERSION_MAJOR << '.' << GLFW_VERSION_MINOR << '\n';
  return 0;
}