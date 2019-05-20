OBJSAPP = StringsApp.o Strings.o
OBJSTEST = StringsTest.o Strings.o
BINARY = StringsApp StringsTest
CFLAGS = -std=c11 -g -Wall

ejecutables: StringsTest StringsApp

StringsTest: $(OBJSTEST)
	@gcc -o StringsTest $(OBJSTEST)

StringsApp: $(OBJSAPP)
	@gcc -o StringsApp $(OBJSAPP)

StringsTest.o: Strings.h StringsTest.c
	@gcc $(CFLAGS) -c StringsTest.c Strings.h

StringsApp.o: Strings.h StringsApp.c
	@gcc $(CFLAGS) -c StringsApp.c Strings.h

Strings.o: Strings.h Strings.c
	@gcc $(CFLAGS) -c Strings.c Strings.h

clean:
	@rm -f $(BINARY) $(OBJSAPP) $(OBJSTEST) *.gch
	@clear
