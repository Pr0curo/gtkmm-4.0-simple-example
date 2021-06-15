# information

This is the most easy way to run gtkmm-4.0 with cmake (and pkg-config-lite) under windows with the msvc compiler.

To compile and run follow these steps:

1. install vcpkg (follow their description)
2. install the gtkmm-4.0 package with vcpkg `vcpkg install gtkmm`
3. download this git
4. change the path in the CMakeLists.txt to your vcpkg
5. go into the folder
6. create a build folder (build)
7. `cd build`
8. `cmake .. -GNinja -DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake`
9. `ninja`
10. run the programm
