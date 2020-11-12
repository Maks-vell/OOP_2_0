#include <iostream>
#include <vector>
#include"Enums.h"
#include"MelodyNote.h"
#include"Song.h"

using namespace std;


int main()
{
    
    Note An(A, MIN);
    Note Fn(F, MIN);
    Note Cn(C);
    Song s1;
    s1<<An;
    s1<<Fn;
    s1<<Cn;
    Song s2;
    s2 << Cn;
    MelodyNote myBook;
    myBook.getCnt();

    if (s1 < s2) {
        s1.play();
    }

    myBook << &s1;
    myBook << &s2;
    
    cout << myBook[0];
    

}