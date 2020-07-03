CC = gcc
CCFLAGS = -g -W -Wall

FLEX = flex
FLEX_OPTS = -Pscoria

BISON = bison
BISON_OPTS = -t -pscoria

OBJS = Absyn.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : Testscoria

clean :
	rm -f *.o Testscoria scoria.aux scoria.log scoria.pdf scoria.dvi scoria.ps scoria

distclean : clean
	rm -f Absyn.h Absyn.c Test.c Parser.c Parser.h Lexer.c Skeleton.c Skeleton.h Printer.c Printer.h Makefile scoria.l scoria.y scoria.tex

Testscoria : ${OBJS} Test.o
	@echo "Linking Testscoria..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o Testscoria

Absyn.o : Absyn.c Absyn.h
	${CC} ${CCFLAGS} -c Absyn.c

Lexer.c : scoria.l
	${FLEX} ${FLEX_OPTS} -oLexer.c scoria.l

Parser.c : scoria.y
	${BISON} ${BISON_OPTS} scoria.y -o Parser.c

Lexer.o : Lexer.c Parser.h
	${CC} ${CCFLAGS} -c Lexer.c

Parser.o : Parser.c Absyn.h
	${CC} ${CCFLAGS} -c Parser.c

Printer.o : Printer.c Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Printer.c

Test.o : Test.c Parser.h Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Test.c
