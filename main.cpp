#include "header.h"
#include "simulator.h"
#include "adver.h"
#include "honest.h"
int main()
{
    simulator *a;
    a=new simulator(100,10,10);
    a->prininfo();
    //a->run(); maybe need a maximum round parameter to force the process to terminate
    return 0;
}
