.PHONY: clean

CC = g++

LIB_DIR = ../googletest/shared_build/lib

CFLAGS = -I include -I ../googletest/googletest/include -I ../googletest/googlemock/include
LDFLAGS = -L ../googletest/shared_build/lib -lgtest -lgmock -lpthread
CXXFILES = $(shell find . -name "*.cpp")
OBJS = $(CXXFILES:.cpp=.o)
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) \
	-Wl,-rpath=$(LIB_DIR)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@echo "Cleaning up..."
	find . -name "*.o" -delete
	rm -f $(TARGET)