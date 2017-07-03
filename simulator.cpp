#include "simulator.h"
simulator::simulator(int n,int num,int maximum_delay):n(n),num(num),maximum_delay(maximum_delay)
{
        tim=0;
        adver=new attacker(num);
        goodman=new honest *[n-num];for(int i=0;i<n-num;++i)goodman[i]=new honest(n,i+num);
}

simulator::~simulator()
{
    delete adver;
    for(int i=0;i<n-num;++i)delete goodman[i];
    delete [] goodman;
}

void simulator::collectmsg()//collect messgae from attacker and honest node
{
    int len1;
    msg * m1=adver->sendmsg(len1);
    for(int i=0;i<len1;++i)buffer.push_back(m1[i]);
    for(int i=0;i<n-num;++i){
        m1=goodman[i]->sendmsg(len1);
        for(int j=0;j<len1;++j)buffer.push_back(m1[i]);
    }
}

void simulator::sendmsg()
{
    int len=buffer.size();
    for(int i=0;i<len;++i)
    {
        if(buffer[i].round==tim || tim-buffer[i].genround>=maximum_delay)
        {
            //more things to do
        }
        else continue;
    }
}

bool simulator::check()
{
    //each round, check each node's state, if more than a threshold is corrupt, then false
    return true;
}

void simulator::run()
{
    while(true)
    {
        ++tim;
        sendmsg();// attacker and honest nodes collect information
        collectmsg(); // based on the situtation, each node will decide what message to deliver, also each node will update their state machine
        if(!check())break; // At this round, check every node's state to if there is any difference
    }
}
void simulator::prininfo()
{
    cout<<"Total users:"<<n<<endl;
    cout<<"Corrupt users:"<<num<<endl;
    cout<<"Maximum delay:"<<maximum_delay<<endl;
}

