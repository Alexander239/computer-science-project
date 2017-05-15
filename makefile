TARGET = Mnog_1
SOURCES = main.cpp Mnogochlen.cpp 
CFLAGS = -c 
CC = g++
OBJS = $(SOURCES:.cpp=.o)

default:  all clean

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

$(OBJS):$(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS)

clean:
	rm -rf  $(OBJS)

