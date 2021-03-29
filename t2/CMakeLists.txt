cmake_minimum_required(VERSION 3.0)

project(HELLO)
add_subdirectory(src bin)
install(TARGETS hello RUNTIME DESTINATION bin)
install(FILES COPYRIGHT README DESTINATION share/doc/cmake/t2)
install(PROGRAMS runhello.sh DESTINATION bin)
install(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)

