AC_INIT(inttread,[1.00])
AC_CONFIG_SRCDIR([configure.ac])

AM_INIT_AUTOMAKE
AC_PROG_CXX(CC g++)
LT_INIT([disable-static])

if test $ac_cv_prog_gxx = yes; then
  CXXFLAGS="$CXXFLAGS -Wall -Wextra -Wshadow"
#  CXXFLAGS="$CXXFLAGS -Wall -Wextra -Werror -Wshadow -Wno-deprecated-declarations"

fi

CINTDEFS=" -noIncludePaths  -inlineInputHeader "
AC_SUBST(CINTDEFS)

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
