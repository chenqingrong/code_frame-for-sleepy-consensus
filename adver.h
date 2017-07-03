#ifndef adver_h
#define adver_h
#include "header.h"
class attacker
{
private:
    int number;//number of nodes that are corrupt
    int n;//total number of user
    node * root;//record the whole bockchain represented as a tree, root is the genesis block
    msg * recv;//received msg of very round
    int len;//length of received msg
    int round;//current round
    void collect(node * &tmp); // just for the destruction function
public:
    attacker(int num);
    ~attacker();
    int get_number(); //return the number of corrupt nodes
    void recvmsg(msg arr[],int length,int tim); // receive message from other nodes, also the current round
    msg* sendmsg(int &length);//send message based on root, received message and current round
    int * get_total_balance();
    // it's a function for converting the chain into a balance book recording each node's balance,good for checking.
};
#endif /* adver_h */
