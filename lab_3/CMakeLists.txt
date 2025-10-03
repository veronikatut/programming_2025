cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
                                     # Если версия установленной программы
                                     # старее указаной, произойдет аварийный выход.
set(PROJECT_NAME lab_3)              # задать значение PROJECT_NAME
project("${PROJECT_NAME}")           # установить имя проекта


set(CMAKE_CXX_STANDART 20)           # устанавливаем 20 стандарт языка


# Сказать программе, что должен быть исполняемый файл
add_executable("${PROJECT_NAME}" main.cpp)
