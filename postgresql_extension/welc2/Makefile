MODULE_big = welc2
OBJS = welc2_1.o welc2_2.o

EXTENSION = welc2
DATA = welc2--1.0.sql

HEADERS = welc2.h

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/welc2
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
