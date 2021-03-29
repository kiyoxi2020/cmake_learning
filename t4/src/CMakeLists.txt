include_directories(/tmp/t3/include/hello)
link_directories(/tmp/t3/lib)
add_executable(main main.cpp)
target_link_libraries(main libhello.a)
