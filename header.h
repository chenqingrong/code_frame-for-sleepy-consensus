#ifndef header_h
#define header_h
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;
struct msg
{
	int id;//who send this msg
	int round;//expected time to send, only matters in attacker
	int kind;//0-transaction, 1-block
	int genround;//when this message is created
	//more to be done on msg content,like send to who and what the content is
};
struct node
{
	int dept;//length of this chain
	msg * content;// record the transaction
	node * next;//the previous block can have multiple blocks as its next block
	node * lchild; //next block
	node(int dep=0,msg *con=NULL,node *ne=NULL,node * lch=NULL):dept(dep),content(con),next(ne),lchild(lch){}
};
string hashfun(msg *a);
#endif
