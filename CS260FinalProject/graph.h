// Stephen Oium 
// C++
// March 2021
// CS 260 Final Project

#include <vector>

struct graphEdge {
    struct graphNode *destination;
    int weight;
};

struct graphNode {
    int data;
    std::vector<graphEdge *> adjacency;
};


class Graph
{
        graphNode current;
        std::vector<graphNode *> nodeList; // Master list

    public:
        Graph();
        void addNode(int newData);
        void addEdge(int sourceLabel, int destinationLabel, int weight);
        int nextVertex(int distance[], bool shortestPathTreeSet[]);
        void printMinimumDistance(int distance[], int node);
        void printShortestPath(int *distance, int startNode, int endNode);
        int *dijkstra(int source);
        void minSpanningTree(int source);
        void shortestPath(int source, int destination);
        std::string toString();
};

 
 
