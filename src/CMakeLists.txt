set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
add_library(EmptyCMakeProject_lib lib.cpp)

# We need this directory, and users of our library will need it too
target_include_directories(EmptyCMakeProject_lib PUBLIC ../include)
