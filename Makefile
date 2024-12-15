all:
	cd Contacts2 && qmake Contacts.pro && make && ./Contacts

run:
	cd Contacts2 && ./Contacts
