#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
typedef size_t vertex;
typedef size_t edge;
typedef size_t index;
typedef size_t degree;
typedef unsigned int component;
typedef unsigned int length;
typedef vector<vector<vertex> > graph;
graph graph_complete( index n );
graph graph_cycle(index n);
graph graph_star(index n);
graph graph_wheel(index n);
graph graph_bipartite_complete( index n1, index n2 );
graph graph_read( string fname );
void graph_write( graph& G, ofstream& fout );
void graph_write2( graph& G, index n1, index n2, ofstream& fout);
graph graph_king( index n1, index n2 );
graph graph_rook( index n1, index n2 );
graph graph_knight( index n1, index n2 );
graph graph_bishop(index n1, index n2);
component BFS( graph &G );
component DFS( graph &G );
component BFS_Trees(graph &G, ofstream &fout);
component DFS_Trees(graph &G, ofstream &fout);
void Dijkstra( graph &G, vertex s, ofstream& fout );
void Dijkstra2(graph &G, index n1, index n2, index s1, index s2, ofstream& fout);
 
