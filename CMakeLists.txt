cmake_minimum_required(VERSION 3.12.4)

project(procc VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

include(D:/vcpkg/scripts/buildsystems/vcpkg.cmake)


# message([STATUS] "Info : ${CPP_GTKMM_INCLUDE_DIR}")
# message([STATUS] "Info : ${_VCPKG_INSTALLED_DIR}")
# message([STATUS] "Info : ${VCPKG_TARGET_TRIPLET}")
# message([STATUS] "Info : ${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/gtkmm-4.0/")


# ----------- gtkmm -----------
find_path(CPP_GTKMM_INCLUDE_DIR NAMES "gtkmm.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/gtkmm-4.0/")
find_library(CPP_GTKMM_LIBRARY NAMES "gtkmm-4.0.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_GTKMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GTKMM_LIBRARY}")
include_directories(${CPP_GTKMM_INCLUDE_DIR})
link_libraries(${CPP_GTKMM_LIBRARY})

# ----------- glibmm ---------
find_path(CPP_LIBMM_INCLUDE_DIR NAMES "glibmm.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/glibmm-2.68/")
find_path(CPP_LIBMMCONFIG_INCLUDE_DIR NAMES "glibmmconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/glibmm-2.68/include/")
find_library(CPP_LIBMM_LIBRARY NAMES "glibmm-2.68.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
include_directories(${CPP_LIBMM_INCLUDE_DIR})
include_directories(${CPP_LIBMMCONFIG_INCLUDE_DIR})
link_libraries(${CPP_LIBMM_LIBRARY})
message([STATUS] "Info : ${CPP_LIBMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_LIBMMCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_LIBMM_LIBRARY}")

# ----------- glib -----------
find_path(CPP_GLIB_INCLUDE_DIR NAMES "glib.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/glib-2.0/")
find_path(CPP_GLIBCONFIG_INCLUDE_DIR NAMES "glibconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/glib-2.0/include/")
find_library(CPP_GLIB_LIBRARY NAMES "glib-2.0.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_GLIB_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GLIBCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GLIB_LIBRARY}")
include_directories(${CPP_GLIB_INCLUDE_DIR})
include_directories(${CPP_GLIBCONFIG_INCLUDE_DIR})
link_libraries(${CPP_GLIB_LIBRARY})

# ----------- sigc++ -----------
find_path(CPP_SIGCPP_INCLUDE_DIR NAMES "sigc++/sigc++.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/sigc++-3.0/")
find_path(CPP_SIGCPPCONFIG_INCLUDE_DIR NAMES "sigc++config.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/sigc++-3.0/include/")
find_library(CPP_SIGCPP_LIBRARY NAMES "sigc-3.0.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_SIGCPP_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_SIGCPPCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_SIGCPP_LIBRARY}")
include_directories(${CPP_SIGCPP_INCLUDE_DIR})
include_directories(${CPP_SIGCPPCONFIG_INCLUDE_DIR})
link_libraries(${CPP_SIGCPP_LIBRARY})

# ----------- giomm -----------
find_path(CPP_GIOMM_INCLUDE_DIR NAMES "giomm.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/giomm-2.68/")
find_path(CPP_GIOMMCONFIG_INCLUDE_DIR NAMES "giommconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/giomm-2.68/include/")
find_library(CPP_GIOMM_LIBRARY NAMES "giomm-2.68.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_GIOMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GIOMMCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GIOMM_LIBRARY}")
include_directories(${CPP_GIOMM_INCLUDE_DIR})
include_directories(${CPP_GIOMMCONFIG_INCLUDE_DIR})
link_libraries(${CPP_GIOMM_LIBRARY})

# ----------- gdkmm(!!!config!!!) -----------
# find_path(CPP_GIOMM_INCLUDE_DIR NAMES "giomm.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/giomm-2.68/")
find_path(CPP_GDKMMCONFIG_INCLUDE_DIR NAMES "gdkmmconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/gtkmm-4.0/include/")
# find_library(CPP_GIOMM_LIBRARY NAMES "giomm-2.68.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
# message([STATUS] "Info : ${CPP_GIOMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GDKMMCONFIG_INCLUDE_DIR}")
# message([STATUS] "Info : ${CPP_GIOMM_LIBRARY}")
# include_directories(${CPP_GIOMM_INCLUDE_DIR})
include_directories(${CPP_GDKMMCONFIG_INCLUDE_DIR})
# link_libraries(${CPP_GIOMM_LIBRARY})

# ----------- pangomm(!!!config!!!) -----------
find_path(CPP_PANGOMM_INCLUDE_DIR NAMES "pangomm/context.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/pangomm-2.48/")
find_path(CPP_PANGOMMCONFIG_INCLUDE_DIR NAMES "pangommconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/pangomm-2.48/include/")
message([STATUS] "CPP_PANGOMM_INCLUDE_DIR : ${CPP_PANGOMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_PANGOMMCONFIG_INCLUDE_DIR}")
include_directories(${CPP_PANGOMM_INCLUDE_DIR})
include_directories(${CPP_PANGOMMCONFIG_INCLUDE_DIR})

# ----------- cairomm/region.h -----------
find_path(CPP_CAIROMM_INCLUDE_DIR NAMES "cairomm/region.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/cairomm-1.16/")
find_path(CPP_CAIROMMCONFIG_INCLUDE_DIR NAMES "cairommconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/cairomm-1.16/include/")
find_library(CPP_CAIROMM_LIBRARY NAMES "cairomm-1.16.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_CAIROMM_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_CAIROMMCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_CAIROMM_LIBRARY}")
include_directories(${CPP_CAIROMM_INCLUDE_DIR})
include_directories(${CPP_CAIROMMCONFIG_INCLUDE_DIR})
link_libraries(${CPP_CAIROMM_LIBRARY})

# ----------- cairo -----------
find_path(CPP_CAIRO_INCLUDE_DIR NAMES "cairo.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/cairo/")
# find_path(CPP_CAIRO_INCLUDE_DIR NAMES "giommconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/giomm-2.68/include/")
find_library(CPP_CAIRO_LIBRARY NAMES "cairo.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_CAIRO_INCLUDE_DIR}")
# message([STATUS] "Info : ${CPP_GIOMMCONFIG_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_CAIRO_LIBRARY}")
include_directories(${CPP_CAIRO_INCLUDE_DIR})
# include_directories(${CPP_GIOMMCONFIG_INCLUDE_DIR})
link_libraries(${CPP_CAIRO_LIBRARY})

# ----------- gdk -----------
find_path(CPP_GDK_INCLUDE_DIR NAMES "gdk/gdk.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/gtk-4.0/")
# find_path(CPP_GDKCONFIG_INCLUDE_DIR NAMES "giommconfig.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/giomm-2.68/include/")
# find_library(CPP_GDK_LIBRARY NAMES "giomm-2.68.lib" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/")
message([STATUS] "Info : ${CPP_GDK_INCLUDE_DIR}")
# message([STATUS] "Info : ${CPP_GDKCONFIG_INCLUDE_DIR}")
# message([STATUS] "Info : ${CPP_GDK_LIBRARY}")
include_directories(${CPP_GDK_INCLUDE_DIR})
# include_directories(${CPP_GDKCONFIG_INCLUDE_DIR})
# link_libraries(${CPP_GDK_LIBRARY})

# ----------- pango -----------
find_path(CPP_PANGO_INCLUDE_DIR NAMES "pango/pango.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/pango-1.0/")
message([STATUS] "Info : ${CPP_PANGO_INCLUDE_DIR}")
include_directories(${CPP_PANGO_INCLUDE_DIR})

# ----------- harfbuzz -----------
find_path(CPP_HARFBUZZ_INCLUDE_DIR NAMES "hb.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/harfbuzz/")
message([STATUS] "Info : ${CPP_HARFBUZZ_INCLUDE_DIR}")
include_directories(${CPP_HARFBUZZ_INCLUDE_DIR})
# ----------- gdk-pixbuff -----------
find_path(CPP_GDK_PIXBUFF_INCLUDE_DIR NAMES "gdk-pixbuf/gdk-pixbuf.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/gdk-pixbuf-2.0/")
message([STATUS] "Info : ${CPP_GDK_PIXBUFF_INCLUDE_DIR}")
include_directories(${CPP_GDK_PIXBUFF_INCLUDE_DIR})
# ----------- graphene -----------
find_path(CPP_GRAPHENE_INCLUDE_DIR NAMES "graphene.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/graphene-1.0/")
find_path(CPP_GRAPHENECONFIG_INCLUDE_DIR NAMES "graphene-config.h" PATHS "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/lib/graphene-1.0/include/")
message([STATUS] "Info : ${CPP_GRAPHENE_INCLUDE_DIR}")
message([STATUS] "Info : ${CPP_GRAPHENECONFIG_INCLUDE_DIR}")
include_directories(${CPP_GRAPHENE_INCLUDE_DIR})
include_directories(${CPP_GRAPHENECONFIG_INCLUDE_DIR})

find_package(unofficial-sqlite3 CONFIG REQUIRED)

# add every needed sourcefile here
ADD_EXECUTABLE(procc 	simple_main.cpp
						)

target_link_libraries(procc PRIVATE unofficial::sqlite3::sqlite3)


# to help find the include paths we are leveraging CMAKE and let it generate the compile_commands.json for us.
# dont forget to let vscode know where to find it
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)