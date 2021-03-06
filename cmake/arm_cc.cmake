
add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PUBLIC
        ${TEST_INCLUDE_DIR}/test/${PROJECT_NAME}.c
        ${UNITY_TEST_RUNNER_PATH}/${PROJECT_NAME}_runner.c

        ${TEST_MOCK_SOURCES}
        ${TEST_SOURCES}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $ENV{MOCK_OUT}
    PRIVATE
        ${TEST_MOCK_INCLUDES}
        ${TEST_INCLUDE_DIR}
        ${OTHER_INCLUDE_DIR}
)

target_link_libraries(unity
    rs232
)

target_link_libraries(${PROJECT_NAME}
    rs232
    unity
    cmock

    blinky_unity
)

set (CMAKE_EXECUTABLE_SUFFIX ".elf")

# Linker path and flags
set(LINKERPATH ${hal_LINKER_PATH})
set(LINKERSCRIPT ${hal_LINKER_SCRIPT})

target_link_options(${PROJECT_NAME}
PRIVATE
    -Wl,-Map=${PROJECT_NAME}.map,--cref
    -Wl,--gc-sections
    -mfpu=fpv5-d16 -mfloat-abi=hard
    -Wl,-z,defs
    -Wl,--print-memory-usage
    --specs=nosys.specs
    --specs=nano.specs
    -lc
    -lm
    -L${CMAKE_SOURCE_DIR}
    -L${LINKERPATH} -T${LINKERSCRIPT}
)

# Show the size and create necessary objects
include(${CMAKE_CURRENT_LIST_DIR}/flasher.cmake)
firmware_size(${PROJECT_NAME})
generate_object(${PROJECT_NAME} .hex ihex)
generate_object(${PROJECT_NAME} .bin binary)
generate_lst(${PROJECT_NAME})
