#include <iostream>
#include "LitStory.h"
#include"Story.h"
int main()
{
    Story a(" araferi"," samadashvili"," 10.24.1993");
    LitStory b("bashiAchuki", "vigaca", "11,12,1823", " genre", "b.type");
    a.print();
    b.print();
}
