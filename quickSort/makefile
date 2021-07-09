
export EXECUTABLE := sort

#########

export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))

$(EXECUTABLE) : $(OBJ_FILES)
	g++ $(OBJ_FILES) -o $(EXECUTABLE)

$(OBJ_FILES) : $(SOURCE_FILES)           
	g++ -c $(SOURCE_FILES)

.PHONY: clean
clean:
	rm $(OBJ_FILES) $(EXECUTABLE)
