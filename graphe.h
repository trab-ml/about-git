#include <stdio.h>
#include <stdlib.h>

#typedef struct noeud {
  int val;
  struct noeud *fg;
  struct noeud *fd;
} Arbre;

void addInTree(Arbre *a);
int deleteFromTree(Arbre *a, int k);
