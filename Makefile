.PHONY: clean

CC = g++
CFLAGS = -I include
CXXFILES = $(shell find . -name "*.cpp")
OBJS = $(CXXFILES:.cpp=.o)
TARGET = main

$(TARGET): $(CFALGS) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@echo "Cleaning up..."
	find . -name "*.o" -delete
	rm -f $(TARGET)