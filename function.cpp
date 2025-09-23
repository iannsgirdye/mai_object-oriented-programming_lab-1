#include "function.h"
#include <string>
#include <cctype>


std::string modifyComment(std::string& comment) {
  std::string modifiedComment;

  std::string vowels = "aeiouy";
  bool isVowel = false;

  for (size_t i = 0; i != comment.size(); ++i) {
    for (size_t j = 0; j != vowels.size(); ++j) {
      if (tolower(comment[i]) == vowels[j]) {
        isVowel = true;
        break;
      }
    }

    if (!isVowel) {
      modifiedComment.push_back(comment[i]);
    }

    isVowel = false;
  }

  return modifiedComment;
}
