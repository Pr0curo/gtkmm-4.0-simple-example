# Minimal working example for GTKMM 4.0

This is the most easy way to run gtkmm-4.0 with cmake (and pkg-config-lite) under windows with the msvc compiler.

To compile and run follow these steps:

1. install vcpkg (follow their description)
1. install the gtkmm-4.0 package with vcpkg `vcpkg install gtkmm`
1. install pkg-config-lite (chocolaty helps here)
1. download this git
1. enter the folder
1. create a build folder `mkdir build`
1. `cd build`
1. `cmake .. -GNinja -DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake`
1. `ninja`
1. run the programm

change the CMAKE_TOOLCHAIN_FILE accordingly (you get the path as a output when you `vcpkg integrate install`)