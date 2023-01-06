add_executable(card-tests card-tests.cpp)

target_link_libraries(card-tests card)

add_test(
	NAME
		test_roman
	COMMAND
		$<TARGET_FILE:card-tests>
)

