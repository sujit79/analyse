CC = g++
CFLAGS = -fPIC -Wall -Wextra -O2 -g 
LDFLAGS = -shared

TARGET_LIB = libhexmapreduce.so  # target lib

SRCS = src/map.cpp src/reduce.cpp src/util-class/hexadecimal-gen.cpp src/util-class/template-for-map-reduce.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -o $@ $^

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS}