cmake_minimum_required(VERSION 3.16)

project(structures_pointers LANGUAGES C)

add_executable(structures_pointers main.c)

include(GNUInstallDirs)
install(TARGETS structures_pointers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
