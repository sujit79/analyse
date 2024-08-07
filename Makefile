CC = g++
CFLAGS = -fPIC -Wall -Wextra -O2 -g 
LDFLAGS = -shared

TARGET_LIB = libhexmapreduce.so  # target lib

SRCS = src/*.cpp src/util-class/*.cpp 
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -o $@ $^

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS}