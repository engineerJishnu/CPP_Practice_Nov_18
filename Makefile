
CC= g++

#compiler flags

CFLAGS= -g -Wall

#the build target executable

TARGET=hello

all:$(TARGET)

$(TARGET):$(TARGET.cpp)
	@echo "making an executable file"
	$(CC) $(CFLLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	@echo "cleaning up"
	$(RM) $(TARGET)



