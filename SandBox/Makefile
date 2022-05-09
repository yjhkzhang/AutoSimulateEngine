#used to build the libEngine.so

XX = g++
CFLAGS = -std=c++17
CLIBS = -lpthread -L ../AutoSimulate/ -lEngine -lGL -lGLU -lglfw

INCLUDE_DIRS = -I ../AutoSimulate/ -I ../AutoSimulate/src/ -I ../AutoSimulate/src/AutoSimulate/  -I ../AutoSimulate/thirdparty/spdlog/include/  -I ../AutoSimulate/thirdparty/glfw/include/
SOURCES = $(wildcard ./src/*.cpp) # $(wildcard ../AutoSimulate/src/AutoSimulate/*.cpp) $(wildcard ../AutoSimulate/src/Platforms/*.cpp)

TARGET = SandBox
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

$(TARGET) : $(OBJECTS)
	$(XX) $(CFLAGS) $^ -o $@ $(INCLUDE_DIRS) $(CLIBS)
$(OBJECTS) : %.o : %.cpp
	$(XX) -c $(CFLAGS) $< -o $@ $(INCLUDE_DIRS)

ECHO:
	@echo $(OBJECTS)

.PHONY : clean
clean:
	rm -rf $(OBJECTS) $(TARGET)