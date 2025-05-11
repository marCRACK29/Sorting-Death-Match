TARGET = main

CXX = g++
CXXFLAGS = -Wall -std=c++17 -g

SRCS = main.cpp merge.cpp heap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) $(TARGET)