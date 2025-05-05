.PHONY: clean

CC = g++
CFLAGS = -I include -I ../googletest/googletest/include -I ../googletest/googlemock/include
LDFLAGS = -L ../googletest/build/lib -lgtest -lgmock -lpthread
CXXFILES = $(shell find . -name "*.cpp")
OBJS = $(CXXFILES:.cpp=.o)
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@echo "Cleaning up..."
	find . -name "*.o" -delete
	rm -f $(TARGET)