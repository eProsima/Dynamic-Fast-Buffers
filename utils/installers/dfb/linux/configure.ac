AC_INIT([dynamicfastbuffers library], [VERSION], [support@eprosima.com], [dfb], [http://eprosima.com/])
AC_PREREQ([2.59])
AC_CHECK_HEADER([fastcdr/FastCdr_version.h],
	[AC_MSG_NOTICE([Found FastCdr])],
	[AC_MSG_ERROR([Could not find FastCdr])],
	[])
AM_INIT_AUTOMAKE([1.10 no-define foreign])
AC_PROG_CXX
LT_INIT
AC_CONFIG_FILES([Makefile include/Makefile])

AC_OUTPUT
