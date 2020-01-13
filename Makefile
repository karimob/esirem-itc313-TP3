#Makefile 

CXX        = g++
CXXFLAGS   = -Wall -Wextra -std=c++14
LDFLAGS    = -lm
SRCS       =  Encrypt.h Encrypt.cpp Encrypt_main.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = Encrypt_main
DEPFLAGS   = -MMD -MP
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)
