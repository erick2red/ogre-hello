AC_PREREQ([2.64])
AC_INIT([ogre-hello],
        [0.0.1],
        [http://github.com/erick2red/ogre-hello],
        [ogre-hellp],
        [http://github.com/erick2red/ogre-hello])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11.1 tar-ustar dist-xz no-dist-gzip -Wall color-tests])
AM_SILENT_RULES([yes])

# Initialize libtool
LT_INIT

# Check for programs
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_CXX
PKG_PROG_PKG_CONFIG([0.20])

pkg_modules="OGRE
	     "
PKG_CHECK_MODULES(OGRE_LIB, [$pkg_modules])

dnl ===========================================================================

AC_CONFIG_FILES([
Makefile
src/Makefile
])

AC_OUTPUT
