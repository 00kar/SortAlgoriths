export EXECUTABLE := selection
export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))
export DEP_FILES := $(patsubst %.cpp, %.dep, $(SOURCE_FILES))


$(EXECUTABLE) : $(OBJ_FILES)
	g++ $^ -o $@

%.o:
	g++ -c $< -o $@

%.dep : %.cpp 
	g++ -MM $< -o $@

.PHONY: clean
clean:
	rm $(DEP_FILES) $(OBJ_FILES) $(EXECUTABLE)

-include $(DEP_FILES)
