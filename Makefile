#Template to search subdirs Makefile
XX = g++
AR = ar
ARFLAG =
CFLAGS =  

CLIBS = 

SUBDIRS = ./AutoSimulate ./SandBox
 
INCLUDES = $(wildcard ./AutoSimulate/src/*.h ./AutoSimulate/src/AutoSimulate*.h)
INCLUDE_DIRS = -I ./AutoSimulate/src/ -I ./AutoSimulate/src/AutoSimulate/
 
TargetLib = libAutoSimulate.so
TargetTest = test.o
 
All: $(SUBDIRS)
 	
$(SUBDIRS):ECHO
	+$(MAKE) -C $@
 
ECHO:
	@echo $(SUBDIRS)
	@echo begin compile
 
.PHONY : clean

clean:
	for dir in $(SUBDIRS);\
	do $(MAKE) -C $$dir clean||exit 1;\
	done