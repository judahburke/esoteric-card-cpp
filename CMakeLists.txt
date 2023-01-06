cmake_minimum_required(VERSION 3.14)

project(esoteric_card)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git 
	GIT_TAG 58d77fa8070e8cec2dc1ed015d66b454c8d78850 # release-1.12.1
	#	URL https://github.com/google/googletest/archive/58d77fa8070e8cec2dc1ed015d66b454c8d78850.zip
	#	DOWNLOAD_EXTRACT_TIMESTAMP 
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	esoteric_card
	esoteric_card.cc
)
target_link_libraries(
	esoteric_card
	GTest::gtest_main
)

include (GoogleTest)
gtest_discover_tests(esoteric_card)

