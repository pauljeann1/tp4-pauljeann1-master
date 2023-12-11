# CMakeList.txt : CMake project for Exo1, include source and define
# project specific logic here.
#
project(Exo1 VERSION 0.1.0 LANGUAGES C)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall)
endif()


include(CTest)
enable_testing()

# Add source to this project's executable.
add_executable (exo1 "main.c")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET exo1 PROPERTY C_STANDARD 99)
endif()

# TODO: Add tests and install targets if needed.


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
