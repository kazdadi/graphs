#ifndef GRAPH_H
#define GRAPH_H

#define NLINKS 100000000lu

typedef struct {
  unsigned long s;
  unsigned long t;
} edge;

typedef struct {
  unsigned long n; // number of nodes
  unsigned long e; // number of edges
  edge *edges;     // list of edges
} edgelist;

typedef struct {
  unsigned long n; // number of nodes
  char *rows; // Matrix elements as bits of chars
} adjacencyMatrix;

typedef struct {
  unsigned long int n;
  unsigned long int e;
  unsigned long long int *cd;
  unsigned long int *adj;
} adjacencyArray;

// compute the maximum of three unsigned long
inline unsigned long max3(unsigned long a, unsigned long b, unsigned long c) {
  a = (a > b) ? a : b;
  return (a > c) ? a : c;
}

void free_edgelist(edgelist *g);
edgelist* readedgelist(char* input);

#endif
