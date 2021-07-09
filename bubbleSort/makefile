export EXECUTABLE := bubble
export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))
  
$(EXECUTABLE) : $(OBJ_FILES)
	g++ $^ -o $@

%.o : %.cpp
	g++ $^ -c -o $@

.PHONY: clean

clean:
	rm $(OBJ_FILES) $(EXECUTABLE)

