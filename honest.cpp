#include "header.h"
#include "honest.h"
void honest::collect(node * &tmp)
{
    if(tmp->lchild!=NULL)collect(tmp->lchild);
    if(tmp->next!=NULL)collect(tmp->next);
    delete tmp;
}
honest::~honest(){collect(root);}

honest::honest(int num,int identi):ID(identi){root=new node;}

void honest::recvmsg(msg arr[],int length,int tim){
    recv=arr;len=length;round=tim;
    //after receving message, update its chain
}

int honest::get_id()
{
    return ID;
}

msg* honest::sendmsg(int &length){ //length is for returning the length of the message
    msg* result;
    //based on chain and recevied message, send message
    return result;
}

bool honest::checkmsg()
{
    //some judgement needs to be filled here, if this is a block, the validity of the credit needs checking.
    //if it is a transaction, also needs checking,like balance,signature and etc.
    return true;
}

int * honest::get_total_balance()
{
    int * a=new int[n];
    //convert the whole chain into a account book--who has how much money
    return a;
}
