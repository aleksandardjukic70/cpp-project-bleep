#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "I like to roll up my broccoli.\n My broccoli is the best thing that exists.\n I like to eat broccoli in the night after a hard day of work.\n";

  bleep(word, text);

  for (int i = 0; i < text.size(); i++) {

    std::cout << text[i];
  }
}
