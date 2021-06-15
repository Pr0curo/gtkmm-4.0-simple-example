cmake_minimum_required(VERSION 3.15)

project(example_project VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)


# add every needed sourcefile here
ADD_EXECUTABLE(example_project simple_main.cpp)

# pkg does all the gtkmm releated "magic" for us, and finds alle modules
find_package(PkgConfig)
pkg_check_modules(GTKMM_VARS REQUIRED IMPORTED_TARGET gtkmm-4.0)

# link GTKMM so we can use it in the target
target_link_libraries(example_project PRIVATE PkgConfig::GTKMM_VARS)


# further information: see here https://github.com/microsoft/vcpkg/issues/18328#issuecomment-857183263
