AM_CPPFLAGS += \
    -I$(top_srcdir)/src/ccutil \
    -I$(top_srcdir)/src/viewer

if VISIBILITY
AM_CPPFLAGS += -DTESS_EXPORTS \
    -fvisibility=hidden -fvisibility-inlines-hidden
endif

noinst_HEADERS = \
    bitvec.h callcpp.h const.h cutil.h cutil_class.h danerror.h \
    emalloc.h globals.h \
    oldlist.h structures.h

noinst_LTLIBRARIES = libtesseract_cutil.la

libtesseract_cutil_la_SOURCES = \
    bitvec.cpp callcpp.cpp cutil.cpp cutil_class.cpp danerror.cpp \
    emalloc.cpp \
    oldlist.cpp structures.cpp
