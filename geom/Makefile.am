
## This file is generated by autogen.py, do not edit
## Process this file with automake to produce Makefile.in
## autogen includes dependencies so automake doesn't need to generated them

AUTOMAKE_OPTIONS = no-dependencies 1.4 foreign

dist-hook:
	mkdir -p $(distdir)/BugTracker
	cp -pR $(srcdir)/BugTracker/* $(distdir)/BugTracker
AM_CPPFLAGS = -I$(srcdir)
if HAVE_MONETDB5
HAVE_MONETDB5_2_SUBDIR = monetdb5
else
HAVE_MONETDB5_2_SUBDIR = 
endif
SUBDIRS =  lib $(HAVE_MONETDB5_2_SUBDIR) sql
BUILT_SOURCES =
MOSTLYCLEANFILES =
EXTRA_DIST = Makefile.ag Makefile.msc

  include $(top_srcdir)/buildtools/conf/rules.mk
