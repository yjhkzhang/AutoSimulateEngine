#used to build the libEngine.so

XX = g++
CFLAGS = -std=c++17 -shared -fPIC  
CLIBS = -lpthread

INCLUDE_DIRS = -I ./ -I./src/ -I ./src/AutoSimulate/ -I ./thirdparty/spdlog/include/
SOURCES = $(wildcard ./src/AutoSimulate/*.cpp)

TARGETLib = libEngine.so
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

$(TARGETLib) : $(OBJECTS)
	$(XX) $(CFLAGS) $^ -o $@ $(CLIBS)
$(OBJECTS) : %.o : %.cpp
	$(XX) -c $(CFLAGS) $< -o $@ $(INCLUDE_DIRS)

ECHO:
	@echo $(OBJECTS)

.PHONY : clean
clean:
	rm -rf $(OBJECTS) $(TARGETLib) 