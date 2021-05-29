most easy and small code to run gtkmm-4.0 witch cmake under windows

to compile and run 

- install vcpkg (follow their description)
- install the gtkmm-4.0 package with vcpkg `vcpkg install gtkmm` 
- download this git
- change the path in the CMakeLists.txt to your vcpkg 
- go into the folder
- create a build folder (build)
- `cd build`
- `cmake .. -GNinja`
- `ninja`
- now run the programm
