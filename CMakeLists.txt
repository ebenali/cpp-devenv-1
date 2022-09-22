cmake_minimum_required(VERSION 3.16)

if (NOT DEFINED ENV{VCPKG_ROOT})
	message(FATAL_ERROR "vcpkg was expected to have been present")
endif()

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")

project(cpp-devenv-1 LANGUAGES CXX)

execute_process(COMMAND "$ENV{VCPKG_ROOT}/vcpkg" install fmt)

find_package(fmt CONFIG REQUIRED)

add_executable(cpp-devenv-1 main.cc)
target_link_libraries(cpp-devenv-1 PRIVATE fmt::fmt)

