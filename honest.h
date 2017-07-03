#ifndef honest_h
#define honest_h
#include "header.h"
//similar as adver, since their behaviors are almost the same, except the msg content
class honest
{
    int n;
    int ID;// ID number for this node
    node * root;
    msg * recv;
    int len;
    int round;
    void collect(node * &tmp);
public:
    honest(int num,int identi);
    ~honest();
    bool checkmsg();// a honest node will check the validity of the message
    void recvmsg(msg arr[],int length,int tim);
    int get_id();
    msg* sendmsg(int &length);
    int * get_total_balance();
};
#endif /* honest_h */
