// Mohammed Omar
// momar05@csu.fullerton.edu
// @momaarr27
// Partners: @
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cerr << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum = 0.0;

  for (int i = 1; i < argc; ++i) {
    try {
      double value = std::stod(arguments[i]);
      sum += value;
    } catch (const std::invalid_argument& e) {
      std::cerr << "error: invalid argument - " << arguments[i] << std::endl;
      return 1;
    } catch (const std::out_of_range& e) {
      std::cerr << "error: argument out of range - " << arguments[i]
                << std::endl;
      return 1;
    }
  }
  double average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << std::endl;

  return 0;
}
