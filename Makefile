all:
	cd Contacts && qmake Contacts.pro && make && ./Contacts

run:
	cd Contacts && ./Contacts
