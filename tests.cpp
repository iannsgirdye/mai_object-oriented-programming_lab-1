#include <gtest/gtest.h>
#include "function.h"

// Проверка, что удаляются все гласные
TEST(ModifyCommentTest, RemoveVowels) {
    std::string input = "Hello World";
    std::string expected = "Hll Wrld";
    EXPECT_EQ(modifyComment(input), expected);
}

// Проверка пустой строки
TEST(ModifyCommentTest, EmptyString) {
    std::string input = "";
    std::string expected = "";
    EXPECT_EQ(modifyComment(input), expected);
}

// Проверка строки без гласных
TEST(ModifyCommentTest, NoVowels) {
    std::string input = "bcdfg";
    std::string expected = "bcdfg";
    EXPECT_EQ(modifyComment(input), expected);
}

// Проверка строки только из гласных
TEST(ModifyCommentTest, OnlyVowels) {
    std::string input = "aeiouyAEIOUY";
    std::string expected = "";
    EXPECT_EQ(modifyComment(input), expected);
}

// Проверка смешанных регистров
TEST(ModifyCommentTest, MixedCase) {
    std::string input = "ApPlE";
    std::string expected = "pPl";
    EXPECT_EQ(modifyComment(input), expected);
}

// Проверка строки с пробелами и спецсимволами
TEST(ModifyCommentTest, SpecialCharacters) {
    std::string input = "T3st! yEs?";
    std::string expected = "T3st! s?";
    EXPECT_EQ(modifyComment(input), expected);
}
