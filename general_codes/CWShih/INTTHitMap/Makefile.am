AUTOMAKE_OPTIONS = foreign

AM_CPPFLAGS = \
  -I$(includedir) \
  -I$(OFFLINE_MAIN)/include \
  -isystem$(ROOTSYS)/include

AM_LDFLAGS = \
  -L$(libdir) \
  -L$(OFFLINE_MAIN)/lib \
  -L$(OFFLINE_MAIN)/lib64

pkginclude_HEADERS = \
  INTTHitMap.h

lib_LTLIBRARIES = \
  libINTTHitMap.la

libINTTHitMap_la_SOURCES = \
  INTTHitMap.cc

libINTTHitMap_la_LIBADD = \
  -lphool \
  -lffaobjects \
  -lffarawobjects \
  -lSubsysReco \
  -lcalotrigger \ 
  -ltrackbase_historic_io \
  -ltrack_io

libINTTHitMap_la_LDFLAGS = \
  -L$(libdir) \
  -L$(OFFLINE_MAIN)/lib \
  -I$(ROOTSYS)/include \
  -lfun4all \
  -lg4eval

BUILT_SOURCES = testexternals.cc

noinst_PROGRAMS = \
  testexternals

testexternals_SOURCES = testexternals.cc
testexternals_LDADD   = libINTTHitMap.la

testexternals.cc:
	echo "//*** this is a generated file. Do not commit, do not edit" > $@
	echo "int main()" >> $@
	echo "{" >> $@
	echo "  return 0;" >> $@
	echo "}" >> $@

clean-local:
	rm -f $(BUILT_SOURCES)
