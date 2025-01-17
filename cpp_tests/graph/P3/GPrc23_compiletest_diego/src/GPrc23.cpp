/*
To compile this use the following:

c++ -std=c++11 -c *.cpp
c++ -std=c++11 *.o -o a.out
*/

#include <iostream>
#include <stdio.h>
#include <limits.h>

#include "graph.h"
//#include "wgraph.h"


 int 
	main()
{
    std::cout << "\nExecuting GPrc23.out\n " << endl;

    ofstream fout;
	
	//  UNWEIGHTED GRAPHS
	//  Complete graph to adjacencies lists K6
    graph K6 = graph_complete( 6 );
	fout.open( "K6.out" );    
	graph_write( K6, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( K6, fout )  << endl;
	DFS_Trees( K6, fout );
    fout  << "\nNumber of BFS components: "  << BFS_Trees( K6, fout)  << endl;
	BFS_Trees( K6, fout );
    Dijkstra( K6, 0, fout );
	fout.close();

    
	
	//  Bipartite complete graph to adjacencies lists K42
    graph K4_2 = graph_bipartite_complete(4, 2);
	fout.open( "K4_2.out" );    
	graph_write( K4_2, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( K4_2, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( K4_2, fout)  << endl;
    Dijkstra( K4_2, 0, fout );
	fout.close();
	
	//  Cycle graph to adjacencies lists C6
    graph C6 = graph_cycle(6);
	fout.open( "C6.out" );    
	graph_write( C6, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( C6, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( C6, fout)  << endl;
    Dijkstra( C6, 0, fout );
	BFS_Trees( C6, fout );
	fout.close();
	
	//  Star graph to adjacencies lists S6
    graph S6 = graph_star( 6 );
	fout.open( "S6.out" );    
	graph_write( S6, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( S6, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( S6, fout)  << endl;
    Dijkstra( S6, 0, fout );
	BFS_Trees( S6, fout );
	fout.close();
	
	//  Wheel graph to adjacencies lists W6
    graph W6 = graph_wheel( 6 );
	fout.open( "W6.out" );    
	graph_write( W6, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( W6, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( W6, fout)  << endl;
    Dijkstra( W6, 0, fout );
	fout.close();
	
	//  Read graph from graph0.in to adjacencies lists G0
    graph G0 = graph_read( "graph0.in" );
	fout.open( "graph0.out" );    
    graph_write( G0, fout );
	fout  << "\nNumber of DFS components: "  << DFS_Trees( G0, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( G0, fout)  << endl;
    Dijkstra( G0, 0, fout );
	BFS_Trees( G0, fout );
	fout.close();
    
	
	//  Read graph from graph0.in to adjacencies lists G1
    graph G1 = graph_read( "graph1.in" );
	fout.open( "graph1.out" );    
    graph_write( G1, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( G1, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( G1, fout)  << endl;
    Dijkstra( G1, 0, fout );
	BFS_Trees( G1, fout );
	fout.close();
	
	//  Read graph from graph0.in to adjacencies lists G0
    graph G2 = graph_read( "graph2.in" );
	fout.open( "graph2.out" );    
    graph_write( G2, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( G2, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( G2, fout)  << endl;
    Dijkstra( G2, 0, fout );
	fout.close();
	
	//  Read graph from graph0.in to adjacencies lists G0
    graph G3 = graph_read( "graph3.in" );
	fout.open( "graph3.out" );    
    graph_write( G3, fout );
    fout  << "\nNumber of DFS components: "  << DFS_Trees( G3, fout)  << endl;
    fout  << "\nNumber of BFS components: "  << BFS_Trees( G3, fout)  << endl;
    Dijkstra( G3, 0, fout );
	fout.close();

     
	
	//  CHESSBOARD GRAPHS
	
	//  King 6x6 graph Kg6_6: distances from (1,1)
	fout.open("Kg6_6.out");
	graph Kg6_6 = graph_king(6, 6);
	graph_write2(Kg6_6, 6, 6, fout);
	Dijkstra2(Kg6_6, 6, 6, 1, 1, fout);
	fout.close();
	
	//  Knight 6x6 graph Kt6_6: distances from (1,1)
	fout.open("Kt6_6.out");
	graph Kt6_6 = graph_knight(6, 6);
	graph_write2(Kt6_6, 6, 6, fout);
	Dijkstra2(Kt6_6, 6, 6, 1, 1, fout);
	fout.close();
	
	//  Rook 6x6 graph Rk6_6: distances from (1,1)
	fout.open("Rk6_6.out");
	graph Rk6_6 = graph_rook(6, 6);
	graph_write2(Rk6_6, 6, 6, fout);
	Dijkstra2(Rk6_6, 6, 6, 1, 1, fout);
	fout.close();
	
	//  Bishop 6x6 graph Bp6_6: distances from (1,1)
	fout.open("Bp6_6.out");
	graph Bp6_6 = graph_bishop(6, 6);
	graph_write2(Bp6_6, 6, 6, fout);
	Dijkstra2(Bp6_6, 6, 6, 1, 1, fout);
	fout.close();
	
	
	//  WEIGHTED GRAPHS	
/*	
	//  Random weighted complete graph to weighted (1-9) adjacencies lists WK6
    wgraph WK6 = wgraph_complete( 6, 9 );
	fout.open( "WK6.out" );    
	wgraph_write( WK6, fout );

	fout << "Distance from 0 to 5: " << Dijkstra( WK6, 0, 5 ) << endl;


	fout << "Diameter " << Diameter( WK6 ) << endl;
	DijkstraTree( WK6, 0, fout );
	fout << "Kruskal tree weight: " << KruskalTrees(WK6, fout) << endl;
	fout << "Prim tree weight: " << PrimTrees(WK6, fout) << endl;
	fout << endl << endl << "WK24" << endl;
	fout.close();
    

	//  Random weighted bipartite complete graph to weighted (1-9) adjacencies lists WK42, WK24
    wgraph WK4_2 = wgraph_bipartite_complete( 4, 2, 9 );
	wgraph WK2_4 = wgraph_bipartite_complete( 2, 4, 9 );
	fout.open( "WK4_2.out" );    
	fout << endl << endl << "WK42" << endl;
	wgraph_write( WK4_2, fout );
	fout << "Distance from 0 to 5 in WK4_2: " << Dijkstra( WK4_2, 0, 5 ) << endl;
	fout << "Diameter of WK42 " << Diameter( WK4_2 ) << endl;
	DijkstraTree( WK4_2, 0, fout );
	fout << "Kruskal tree weight: " << KruskalTrees(WK4_2, fout) << endl;
	fout << "Prim tree weight: " << PrimTrees(WK4_2, fout) << endl;
	fout << endl << endl << "WK24" << endl;
	wgraph_write(WK2_4, fout);
	fout << "Distance from 0 to 5 in WK2_4: " << Dijkstra(WK2_4, 0, 5) << endl;
	fout << "Diameter of WK24 " << Diameter(WK2_4) << endl;
	DijkstraTree(WK2_4, 0, fout);
	fout << "Kruskal tree weight: " << KruskalTrees(WK2_4, fout) << endl;
	fout << "Prim tree weight: " << PrimTrees(WK2_4, fout) << endl;
	fout.close();
	
	//  Random weighted cycle graph to weighted (1-9) adjacencies lists WC6
    wgraph WC6 = wgraph_cycle( 6, 9 );
	fout.open( "WC6.out" );    
	wgraph_write( WC6, fout );
	fout << "Distance from 0 to 5: " << Dijkstra( WC6, 0, 5 ) << endl;
	fout << "Diameter " << Diameter( WC6 ) << endl;
	DijkstraTree( WC6, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WC6, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WC6, fout ) << endl;
	fout.close();
	
	//  Random weighted star graph to weighted (1-9) adjacencies lists WS6
    wgraph WS6 = wgraph_star( 6, 9 );
	fout.open( "WS6.out" );    
	wgraph_write( WS6, fout );
	fout << "Distance from 0 to 6: " << Dijkstra( WS6, 0, 6 ) << endl;
	fout << "Diameter " << Diameter( WS6 ) << endl;
	DijkstraTree( WS6, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WS6, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WS6, fout ) << endl;
	fout.close();
	
	//  Random weighted star graph to weighted (1-9) adjacencies lists WS6
    wgraph WW6 = wgraph_wheel( 6, 9 );
	fout.open( "WW6.out" );    
	wgraph_write( WW6, fout );
	fout << "Distance from 0 to 6: " << Dijkstra( WW6, 0, 6 ) << endl;
	fout << "Diameter " << Diameter( WW6 ) << endl;
	DijkstraTree( WW6, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WW6, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WW6, fout ) << endl;
	fout.close();
	
	//  Read weighted graph from wgraph0.in to weighted adjacencies lists WG0
    wgraph WG0 = wgraph_read( "wgraph0.in" );
	fout.open( "wgraph0.out");    
	wgraph_write( WG0, fout );
	fout << "Distance from 0 to " << WG0.size()-1 << ": " << Dijkstra( WG0, 0, WG0.size()-1 ) << endl;
	fout << "Diameter " << Diameter( WG0 ) << endl;
	DijkstraTree( WG0, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WG0, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WG0, fout ) << endl;
	fout.close();
	
	//  Read weighted graph from wgraph1.in to weighted adjacencies lists WG1
    wgraph WG1 = wgraph_read( "wgraph1.in" );
	fout.open( "wgraph1.out");    
	wgraph_write( WG1, fout );
	fout << "Distance from 0 to " << WG1.size()-1 << ": " << Dijkstra( WG1, 0, WG1.size()-1 ) << endl;
	fout << "Diameter " << Diameter( WG1 ) << endl;
	DijkstraTree( WG1, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WG1, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WG1, fout ) << endl;
	fout.close();
	
	//  Read weighted graph from wgraph2.in to weighted adjacencies lists WG2
    wgraph WG2 = wgraph_read( "wgraph2.in" );
	fout.open( "wgraph2.out");    
	wgraph_write( WG1, fout );
	fout << "Distance from 0 to " << WG2.size()-1 << ": " << Dijkstra( WG2, 0, WG2.size()-1 ) << endl;
	fout << "Diameter " << Diameter( WG2 ) << endl;
	DijkstraTree( WG2, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WG2, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WG2, fout ) << endl;
	fout.close();
	
	//  Read weighted graph from wgraph3.in to weighted adjacencies lists WG3
    wgraph WG3 = wgraph_read( "wgraph3.in" );
	fout.open( "wgraph3.out");    
	wgraph_write( WG3, fout );
	fout << "Distance from 0 to " << WG3.size()-1 << ": " << Dijkstra( WG3, 0, WG3.size()-1 ) << endl;
	fout << "Diameter " << Diameter( WG3 ) << endl;
	DijkstraTree( WG3, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WG3, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WG3, fout ) << endl;
	fout.close();
	
	//  Read dodecahedron weighted graph from D.in to weighted adjacencies lists WD
    wgraph WD = wgraph_read( "WD.in" );
	fout.open( "WD.out");    
	wgraph_write( WD, fout );
	fout << "Distance from 0 to " << WD.size()-1 << ": " << Dijkstra( WD, 0, WD.size()-1 ) << endl;
	fout << "Diameter " << Diameter( WD ) << endl;
	DijkstraTree( WD, 0, fout );
    fout << "Kruskal tree weight: " << KruskalTrees( WD, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( WD, fout ) << endl;
	fout.close();
	
	//  Read icosahedron weighted graph from I.in to weighted adjacencies lists WI
	wgraph WI = wgraph_read("WI.in");
	fout.open("WI.out");
	wgraph_write(WI, fout);
	fout << "Distance from 0 to " << WI.size() - 1 << ": " << Dijkstra(WI, 0, WI.size() - 1) << endl;
	fout << "Diameter " << Diameter(WI) << endl;
	DijkstraTree(WI, 0, fout);
	fout << "Kruskal tree weight: " << KruskalTrees(WI, fout) << endl;
	fout << "Prim tree weight: " << PrimTrees(WI, fout) << endl;
	fout.close();
	
	//  Read cities weighted graph from cities1.in to weighted adjacencies lists Cities1
    wgraph Cities1 = wgraph_read( "cities1.in" );
	fout.open( "cities1.out");    
	wgraph_write( Cities1, fout );
	fout << "Kruskal tree weight: " << KruskalTrees( Cities1, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( Cities1, fout ) << endl;
	fout.close();
	
	//  Read cities weighted graph from cities2.in to weighted adjacencies lists Cities2
    wgraph Cities2 = wgraph_read( "cities2.in" );
	fout.open( "cities2.out");    
	wgraph_write( Cities2, fout );
	fout << "Kruskal tree weight: " << KruskalTrees( Cities2, fout ) << endl;
	fout << "Prim tree weight: " << PrimTrees( Cities2, fout ) << endl;
	fout.close();
    cout << "Press enter to finish..." << endl;
    cin.get();
  */
	
}
