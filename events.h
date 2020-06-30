#ifndef EVENTS_H_INCLUDED
#define EVENTS_H_INCLUDED
using namespace std;

class Events
{
private:
    string lore;
    string effet;
    string qdesti;
    int niv;
public:
    Events(string l,string e,string qd)
    {
      lore=l;
      effet=e;
      qd=qdesti;
    }
    void getniv()
    {
        //obtenir le niveau du sujet
    }

};
