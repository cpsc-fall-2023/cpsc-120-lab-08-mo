// Mohammed Omar
// momar05@csu.fullerton.edu
// @momaarr27
// Partners: @
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cerr << "error: you must supply three arguments" << std::endl;
    return 1;
  }
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];
  std::cout << "Your order:" << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;

  return 0;
}
