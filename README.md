webroot_installer
====================

I made this program to be ran along side the manual mode of the Letsencrypt letsencrypt-auto installer because it was having permission problems, let me know if you guys need an CLI API version of this program incase you want to automate it.

### Program files

File specifications:

* `webroot_installer.h`: contains all the fucntions needed.
* `webroot_installer.cpp`: main program for acme-challenge generation.


### Installation && Usage

First install g++ if you don't have it you can install it on ubuntu by using the following command:

	sudo apt-get install build-essential
	
This should install all the compilers such as gcc and g++ and their dependencies.

You can install my webroot_installer by following these steps:

	git clone https://github.com/digitaliceberg/webroot_installer.git
	cd webroot_installer
	g++ webroot_installer.cpp -o webroot_installer
	./webroot_installer