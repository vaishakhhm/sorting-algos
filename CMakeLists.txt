cmake_minimum_required(VERSION 3.30.0)
project(SortingAlgos VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/headers)

set(SOURCE_FILES 
    main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_SOURCE_DIR}/install)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/headers ${CMAKE_SOURCE_DIR}/sources)

include(CPack)
