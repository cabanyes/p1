CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		p1.o

LIBS =

TARGET =	p1

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
