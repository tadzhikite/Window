window: main.cpp
	g++ main.cpp -o window -lglfw
clean: 
	rm -f window
install: window
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f window $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/window
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/window
