export EXECUTABLE := merge
export SOURCE_FILES := $(wildcard *.cpp)

$(EXECUTABLE) : $(SOURCE_FILES)
	g++ $^ -o $@

.PHONY: clean
clean:
	rm $(EXECUTABLE)
