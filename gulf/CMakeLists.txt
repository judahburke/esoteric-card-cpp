project(gulf LANGUAGES CXX)

add_executable(play-gulf
	PRIVATE
		gulf.cpp
		gulf-dealer.cpp
		gulf-tableau.cpp
		gulf-post.cpp
		gulf-factory.cpp
	PUBLIC
		gulf.hpp
		gulf-dealer.hpp
		gulf-tableau.hpp
		gulf-post.hpp
		gulf-factory.hpp
	)

# add_subdirectory(roman)
# add_subdirectory(ui)

target_link_libraries(r2a
	PRIVATE
		card
	)

