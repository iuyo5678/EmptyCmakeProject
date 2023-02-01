Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(EmptyCMakeProject_test test.cpp)

target_link_libraries(EmptyCMakeProject_test PRIVATE EmptyCMakeProject_lib Catch2::Catch2WithMain)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
# add_test(NAME EmptyCMakeProjectTest COMMAND EmptyCMakeProject_test) # Command can be a target
