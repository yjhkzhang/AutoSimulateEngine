#used to build the libEngine.so

XX = g++
CFLAGS = -std=c++17 -g 
CLIBS = -lpthread -L ../AutoSimulate/ -lEngine

INCLUDE_DIRS = -I ../AutoSimulate/ -I ../AutoSimulate/src/ -I ../AutoSimulate/src/AutoSimulate/  -I ../AutoSimulate/thirdparty/spdlog/include/
SOURCES = $(wildcard ./src/*.cpp) $(wildcard ../AutoSimulate/src/AutoSimulate/*.cpp)

TARGET = SandBox
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

$(TARGET) : $(OBJECTS)
	$(XX) $(CFLAGS) $^ -o $@ $(CLIBS)
$(OBJECTS) : %.o : %.cpp
	$(XX) -c $(CFLAGS) $< -o $@ $(INCLUDE_DIRS)

ECHO:
	@echo $(OBJECTS)

.PHONY : clean
clean:
	rm -rf $(OBJECTS) $(TARGET) 