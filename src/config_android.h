/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.ac by autoheader.  */
/* NOTE: THIS VERSION IS FOR ANDROID ONLY and manually adjusted */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Defined to 1 if VA-API exposes JPEG decoding */
#define HAVE_JPEG_DECODING 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Major version of the driver */
#define INTEL_DRIVER_MAJOR_VERSION 1

/* Micro version of the driver */
#define INTEL_DRIVER_MICRO_VERSION 16

/* Minor version of the driver */
#define INTEL_DRIVER_MINOR_VERSION 0

/* Preversion of the driver */
#define INTEL_DRIVER_PRE_VERSION 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "libva-driver-intel"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "haihao.xiang@intel.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "intel_driver"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "intel_driver 1.0.16.pre1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libva-driver-intel"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0.16.pre1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define driver entry-point */
#define VA_DRIVER_INIT_FUNC __vaDriverInit_0_33

/* Version number of package */
#define VERSION "1.0.16.pre1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
#ifdef ANDROID
#define Drawable unsigned int
#endif
