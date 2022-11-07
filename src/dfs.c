/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"


void DFT (node * root)
{
	// Recursive implement DFS
	// Hint: You can use print_node, print_tree and/or print_stack.
  //pre: root must point to atleast 1 rchild or lchild.
  //post: prints all children of tree, going as far left as possible first, then goes right and then left again if possible.
  if(root!=NULL)
  {
    printf("\n");
    print_node(root); //prints current root
    printf("\n");
    DFT(root->lchild);//prints all lchildren until root=NULL
    DFT(root->rchild);//prints all rchildren until root=NULL, going back 
  }

}

node *make_node (int num, node * left, node * right)
{
  node *element =malloc(sizeof(node));
  element->lchild=left;
  element->rchild=right;
  element->num=num;
  element->visited=false;
	return element;
}

void free_node (node * p)
{
	free(p);
}


void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

stack *push (stack * topp, node * node)
{
  stack *element=malloc(sizeof(stack));
  element->node=node;
  element->next=topp;
  topp=element;
	return 0;
}

bool isEmpty (stack * topp)
{
  if(topp->next==NULL)
  {
    return true;
  }
  return false;
}

node *top (stack * topp)
{
	return topp->node;
}

// Utility function to pop topp  
// element from the stack 

stack *pop (stack * topp)
{
  topp=topp->next;
  return topp;
	
}

void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
