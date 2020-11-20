#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct NODE
{
	char data;
	NODE *next;
};
NODE *createNode(char data)
{
	NODE *node = new NODE;
	node->data = data;
	node->next = NULL;
	return node;
}
//void printList(NODE *node)
//{
//	for (NODE *i = node; i != NULL; i = i->next)
//	{
//		printf("%c ",i->data);
//	}
//}
void addTail(NODE* &node, char data)
{
	NODE *temp, *p;
	temp = createNode(data);
	if (node == NULL)
		node = temp;
	else
	{
		p = node;
		while (p->next != NULL)
			p = p->next;
		p->next = temp;
	}
}
string removeDuplicate(string s)
{
	string output;
	char temp = s[0];
	for (int i = 1; i < s.length(); i++)
	{
		if (temp != s[i])
		{
			output += temp;
			temp = s[i];
		}
	}
	output += temp;
	return output;
}
string countDuplicate(string s)
{
	string output;
	int count = 1;
	char temp = s[0];
	int x = 1;
	if (temp != s[1])
	{
		output += count + 48;
		temp = s[1];
		x++;
	}
	for (int i=x; i < s.length(); i++)
	{
		if (temp != s[i]&&temp!=s[i-2])
			output += 49;
		if (temp == s[i])
		{
			count++;
		}
		else
		{
			if (count != 1)
				output += count + 48;
			count = 1;
			temp = s[i];
		}


	}
	if (count == 1)
		output += 49;
	if (count != 1)
		output += count + 48;
	return output;
}
string transferStr(string s)
{
	string output;
	string temp = removeDuplicate(s);
	NODE *l1 = createNode(temp[0]);
	for (int i = 1; i < temp.length(); i++)
	{
		addTail(l1, temp[i]);
	}
	temp = countDuplicate(s);
	NODE *l2 = createNode(temp[0]);
	for (int i = 1; i < temp.length(); i++)
	{
		addTail(l2, temp[i]);
	}
	for (NODE *p1 = l1; p1 != NULL;)
	{
		for (NODE *p2 = l2; p2 != NULL; p2 = p2->next)
		{
			if(p2->data!=49)
				output += p2->data;
			output += p1->data;
			p1 = p1->next;
		}
	}
	return output;
}
int main()
{
	string s = "AAAAAAJFHDDDDDCCCCCCC";
	string test = transferStr(s);
	for (int i = 0; i < test.length(); i++)
		cout << test[i];
	return 0;
}
