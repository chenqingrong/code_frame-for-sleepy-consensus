#ifndef simulator_h
#define simulator_h
#include "header.h"
#include "honest.h"
#include "adver.h"
class simulator
{
private:
    int n;//number of users in this network
    int num;//number of attackers, for simplicity, only 0->num-1 are attackers
    int maximum_delay;//maximum network latency
    int tim;//counted in round
    attacker * adver;
    honest ** goodman;
    vector<msg>buffer;//for undelivered buffer
public:
    simulator(int n,int num,int maximum_delay);
    ~simulator();
    void collectmsg(); //collect messgae from attacker and honest node
    void sendmsg(); // in every round, messages from last round will be delievered
    bool check(); // in each round, check each node's state to if they are the same or not
    void run();//run the simulator
    void prininfo();
};


#endif /* simulator_h */
