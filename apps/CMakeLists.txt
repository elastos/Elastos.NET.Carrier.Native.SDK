include(AddSubModule)

set(DEPEND_MODULES
    libcrystal
    libconfig
    carrier0
    carrier-session)

add_submodule(elashell
    DIRECTORY shell
    DEPENDS ${DEPEND_MODULES})

add_submodule(elapfd
    DIRECTORY pfd
    DEPENDS ${DEPEND_MODULES})

add_submodule(elafile
    DIRECTORY file
    DEPENDS ${DEPEND_MODULES} carrier-filetransfer)

#add_submodule(fileonce
#     DIRECTORY fileonce
#     DEPENDS ${DEPEND_MODULES} carrier-filetransfer)

add_submodule(elaerr
    DIRECTORY errstr
    DEPENDS ${DEPEND_MODULES})

if (NOT WIN32)
    add_submodule(elaspeedtest
        DIRECTORY speedtest
        DEPENDS ${DEPEND_MODULES})
endif()
