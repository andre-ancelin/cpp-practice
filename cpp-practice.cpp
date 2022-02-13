#include <iostream>
using namespace std;

typedef enum Note {A, B, C, D, E, F, G} Note;

class Instrument {
public:
	virtual void playNote (const Note n) const = 0;
};

class Trumpet : public Instrument {
public:
	virtual void playNote (const Note n) const {
		cout << "Trumpet " << n << endl;
	}
};

class Piano : public Instrument {
public:
	virtual void playNote (const Note n) const {
		cout << "Piano " << n << endl;
	}
};

////static void
////tune (
////	Instrument 	&instrument,
////	const Note	note
////){
////	instrument.playNote(note);
////}


int
main (
	int		argc,
	char	**argv
){
	//cout << "Hello world" << endl;
	//cout << "Development branch in GIT" << endl;

	Trumpet trumpet;
	Piano piano;

	//tune(trumpet, A);
	//tune(piano, C);

//	Instrument *
//	i = &trumpet;
//	i->playNote(D);
	((Instrument&)trumpet).playNote(A);
	trumpet.playNote(B);

	((Instrument&)piano).playNote(C);
	piano.playNote(D);

	return 0;
}
