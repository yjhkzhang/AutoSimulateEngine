#used to build the libEngine.so

XX = g++
CFLAGS = -std=c++17 -shared -fPIC  
CLIBS = -lpthread

INCLUDE_DIRS = -I ./ -I./src/ -I ./src/AutoSimulate/ -I ./thirdparty/spdlog/include/ -I./thirdparty/glfw/include -I./thirdparty/Glad/include -I ./thirdparty/imgui/
SOURCES = $(wildcard ./src/AutoSimulate/*.cpp) $(wildcard ./src/Platforms/*.cpp) $(wildcard ./src/AutoSimulate/ImGui/*.cpp) $(wildcard ./thirdparty/Glad/src/*.cpp) $(wildcard ./src/Platforms/OpenGL/*.cpp) $(wildcard  ./thirdparty/imgui/*.cpp)

TARGETLib = libEngine.so
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

All:$(TARGETLib)
	sudo cp $(TARGETLib) /lib/

$(TARGETLib) : $(OBJECTS)
	$(XX) $(CFLAGS) $^ -o $@ $(CLIBS)
$(OBJECTS) : %.o : %.cpp
	$(XX) -c $(CFLAGS) $< -o $@ $(INCLUDE_DIRS)

ECHO:
	@echo $(OBJECTS)

.PHONY : clean
clean:
	rm -rf $(OBJECTS) $(TARGETLib) 
	sudo rm /lib/libEngine.so