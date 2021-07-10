my_path := $(shell pwd)
export src_path := $(my_path)/src
export mkf_path := $(my_path)/mkf
export bubble_path := $(src_path)/bubbleSort
export merge_path := $(src_path)/mergeSort
export quick_path := $(src_path)/quickSort
export selection_path := $(src_path)/selectionSort


.PHONY: bubble
bubble: clean
	@echo "Doing bubble sort"
	@mkdir Bin obj dep
	@mv $(mkf_path)/makefile $(bubble_path)
	@cd $(bubble_path) && make
	@mv $(bubble_path)/makefile $(mkf_path) && mv $(bubble_path)/out $(my_path)/Bin
	@mv $(bubble_path)/*.dep $(my_path)/dep && mv $(bubble_path)/*.o $(my_path)/obj

.PHONY: merge
merge: clean
	@echo "Doing merge sort"
	@mkdir Bin obj dep
	@mv $(mkf_path)/makefile $(merge_path)
	@cd $(merge_path) && make
	@mv $(merge_path)/makefile $(mkf_path) && mv $(merge_path)/out $(my_path)/Bin
	@mv $(merge_path)/*.dep $(my_path)/dep && mv $(merge_path)/*.o $(my_path)/obj

.PHONY: quick
quick: clean
	@echo "Doing quick sort"
	@mkdir Bin obj dep
	@mv $(mkf_path)/makefile $(quick_path)
	@cd $(quick_path) && make
	@mv $(quick_path)/makefile $(mkf_path) && mv $(quick_path)/out $(my_path)/Bin
	@mv $(quick_path)/*.dep $(my_path)/dep && mv $(quick_path)/*.o $(my_path)/obj

.PHONY: selection
selection: clean
	@echo "Doing selection sort"
	@mkdir Bin obj dep
	@mv $(mkf_path)/makefile $(selection_path)
	@cd $(selection_path) && make
	@mv $(selection_path)/makefile $(mkf_path) && mv $(selection_path)/out $(my_path)/Bin
	@mv $(selection_path)/*.dep $(my_path)/dep && mv $(selection_path)/*.o $(my_path)/obj

.PHONY: clean
clean:
	@-rm -r $(my_path)/Bin $(my_path)/dep $(my_path)/obj > /dev/null 2> /dev/null
