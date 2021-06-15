# information

This is the most easy way to run gtkmm-4.0 with cmake (and pkg-config-lite) under windows with the msvc compiler.

To compile and run follow these steps:

1. install vcpkg (follow their description)
2. install the gtkmm-4.0 package with vcpkg `vcpkg install gtkmm`
3. download this git
4. go into the folder
5. create a build folder (build)
6. `cd build`
7. `cmake .. -GNinja -DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake`
8. `ninja`
9. run the programm
