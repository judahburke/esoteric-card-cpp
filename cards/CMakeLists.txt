add_library(card "")

target_sources(card
	PRIVATE
		${CMAKE_CURRENT_LIST_DIR}/card-rank.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-suit.cpp
		${CMAKE_CURRENT_LIST_DIR}/card.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-factory.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-options.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-exceptions.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-deck.cpp
		${CMAKE_CURRENT_LIST_DIR}/guid.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-player.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-table.cpp
		${CMAKE_CURRENT_LIST_DIR}/card-dealer.cpp

	PUBLIC
		${CMAKE_CURRENT_LIST_DIR}/card-rank.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-suit.hpp
		${CMAKE_CURRENT_LIST_DIR}/card.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-factory.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-options.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-exceptions.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-deck.hpp
		${CMAKE_CURRENT_LIST_DIR}/guid.h
		${CMAKE_CURRENT_LIST_DIR}/card-player.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-table.hpp
		${CMAKE_CURRENT_LIST_DIR}/card-dealer.hpp
	)

target_include_directories(card
	PUBLIC
		${CMAKE_CURRENT_LIST_DIR} )
