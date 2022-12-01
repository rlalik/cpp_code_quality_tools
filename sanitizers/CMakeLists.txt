add_executable(address_demo address_demo.cpp)
target_compile_options(address_demo PUBLIC -fsanitize=address)
target_link_options(address_demo PUBLIC -fsanitize=address)

add_executable(undefined_demo undefined_demo.cpp)
target_compile_options(undefined_demo PUBLIC -fsanitize=undefined)
target_link_options(undefined_demo PUBLIC -fsanitize=undefined)
