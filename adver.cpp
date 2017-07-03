#include "adver.h"
#include "header.h"
attacker::~attacker(){collect(root);}

attacker::attacker(int num):number(num){root=new node;}

void attacker:: collect(node * &tmp)
{
    if(tmp->lchild!=NULL)collect(tmp->lchild);
    if(tmp->next!=NULL)collect(tmp->next);
    delete tmp;
}


int attacker::get_number(){return number;}

void attacker::recvmsg(msg arr[],int length,int tim){
		recv=arr;len=length;
        round=tim;
}

msg* attacker::sendmsg(int &length) //length is for returning the length of the message
{//length is for the output msg len
		msg* result;
		//based on recvmsg and root, make decisions about what to send，also change chain view
		return result;
}

int * attacker::get_total_balance()
{
		int * a;
		a=new int(n);
		//convert the whole chain into a account book--who has how much money
		return a;
}
