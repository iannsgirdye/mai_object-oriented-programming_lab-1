cmake_minimum_required(VERSION 3.10)
project(mai_object-oriented-programming_lab-1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Основная библиотека с функцией
add_library(function function.cpp function.h)

# Программа
add_executable(main_app main.cpp)
target_link_libraries(main_app PRIVATE function)

# Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Чтобы gtest не переопределял политику компиляции
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Тесты
add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE function gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
