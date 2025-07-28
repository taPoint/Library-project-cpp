cmake_minimum_required(VERSION 3.10)
project(Library)

# Указываем, что проект требует C++17 (или другой стандарт)
set(CMAKE_CXX_STANDARD 17)

# Добавляем исполняемый файл 'program'
add_executable(program 
    program.cpp 
    cpp/EnterSystem.cpp 
    cpp/BaseOperations.cpp
    cpp/User.cpp 
    cpp/Book.cpp
)

# Указываем путь к заголовочным файлам
target_include_directories(program PRIVATE include)