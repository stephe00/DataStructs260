// Stephen Oium 
// C++
// March 2021
// CS 260 Final Project 

/* this will include a step by step process of checking everything off for the final project 
1. 
a function to add a new vertex to the graph (perhaps add_vertex(vertex_name))

2.
function to add a new edge between two vertices of the graph (perhaps add_edge(source, destination) or source.add_edge(destination))

3. 
function for a shortest path algorithm (perhaps shortest_path(source, destination))
4. 
function for a minimum spanning tree algorithm (example min_span_tree()).
*/


#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits.h>

#include "Graph.h"

#define INFINITY INT_MAX

using std::cout;
using std::endl;

Graph::Graph()
{

}

void Graph::addNode(int newData)
{
    // Create new node
    graphNode *newNode = new graphNode;
    newNode->data = newData;

    //Place node
    nodeList.push_back(newNode);
}

void Graph::addEdge(int sourceLabel, int destinationLabel, int weight) // 2 or Edge 
{
    graphNode *sourceNode = nodeList[sourceLabel];
    graphNode *destinationNode = nodeList[destinationLabel];
    graphEdge *newGraphEdge = new graphEdge;
    newGraphEdge->destination = destinationNode;
    newGraphEdge->weight = weight;
    sourceNode->adjacency.push_back(newGraphEdge);
}

int Graph::nextVertex(int distance[], bool shortestPathTreeSet[]) // add vertex 
{
    
    int minimum = INFINITY;
    int nextIndex;

    for (unsigned int i = 0; i < nodeList.size(); i++)
    {
        if (shortestPathTreeSet[i] == false && distance[i] <= minimum)
        {
            minimum = distance[i];
            nextIndex = i;
        }
    }

    return nextIndex;
}

void Graph::printMinimumDistance(int *distance, int node) // print the distance 
{
    cout << "Vertex     Distance from node " << node << endl;
    for (unsigned int i = 0; i < nodeList.size(); i++)
    {
        cout << i << "          " << distance[i] << endl;
    }
    cout << endl;
}

void Graph::printShortestPath(int *distance, int startNode, int endNode) // shortest distance 
{
    int shortestDistance = distance[endNode];
    cout << "Shortest path from " << startNode << " to " << endNode << " is " << shortestDistance << endl << endl;
}

int *Graph::dijkstra(int source) // shortest path algorithm
{
    

    static int distance[9]; // 9 (best number)
    bool shortestPathTreeSet[nodeList.size()]; // true 
    
    // FALSE 
    for (unsigned int i = 0; i < nodeList.size(); i++)
    {
        distance[i] = INFINITY;
        shortestPathTreeSet[i] = false; // return false 
    }

    // always (0)
    distance[source] = 0;

    graphNode *currentNode;
    // Find all the shortcuts 
    for (unsigned int i = 0; i < nodeList.size() - 1; i++)
    {
        // Find next vertex with shortest distance 
        int currentVertex = nextVertex(distance, shortestPathTreeSet);
        currentNode = nodeList[currentVertex];

        // Mark it as included
        shortestPathTreeSet[currentVertex] = true;

        // Updates
        for(unsigned int j = 0; j < currentNode->adjacency.size(); j++)
        {
            // locating node name 
            int adjacentNode = currentNode->adjacency[j]->destination->data;
            if(!shortestPathTreeSet[adjacentNode] && // 
                distance[currentVertex] != INFINITY && // 
                distance[currentVertex] + currentNode->adjacency[j]->weight < distance[adjacentNode]) // Is the new proposed path shorter than the current one?
            {
                // If so then update it!
                distance[adjacentNode] = distance[currentVertex] + currentNode->adjacency[j]->weight;
            }
        }
    }
    return distance;
}
 
void Graph::minSpanningTree(int source) // spanning tree or #4 
{
    int *tree = new int[nodeList.size()];
    tree = dijkstra(source);
    printMinimumDistance(tree, source);
}

void Graph::shortestPath(int source, int destination) // # shortest path or number 3 
{
    int *tree = new int[nodeList.size()];
    tree = dijkstra(source);
    printShortestPath(tree, source, destination);
}

std::string Graph::toString()
{
    std::string result = "";
    std::stringstream ss;
    graphNode *currentNode;

    for(unsigned int i = 0; i < nodeList.size(); i++)
    {
        currentNode = nodeList[i];
        ss << currentNode->data;
        result += ss.str();
        ss.str(std::string());
        result += " -> ";
        
        for(unsigned int j = 0; j < currentNode->adjacency.size(); j++)
        {
            result += "(";
            ss << currentNode->adjacency[j]->destination->data;
            result += ss.str();
            ss.str(std::string());
            result += ", ";
            ss << currentNode->adjacency[j]->weight;
            result += ss.str();
            ss.str(std::string());
            result += ")";
            result += ",";
        }
        result += "\n";
    }

    return result;
}
