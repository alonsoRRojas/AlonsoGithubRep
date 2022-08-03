// AStarSecondTry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

#include "Node.h"
using namespace std;

void AStar(Node* startNode, Node* endNode);
bool LinearSearch(list<Node*>* container, Node* target);
Node* GetLowestCostNode(list<Node*>* container);

int main()
{
    Coordinate coordinates[4] = {
      Coordinate("a", "b", 5),
      Coordinate("b", "c", 1),
      Coordinate("a", "d", 7),
      Coordinate("c", "d", 1)


    };

    Node nodeA = Node("a");
    Node nodeB = Node("b");
    Node nodeC = Node("c");
    Node nodeD = Node("d");

    nodeA.ConnectNode(&nodeB, 5);
    nodeA.ConnectNode(&nodeD, 7);
    nodeB.ConnectNode(&nodeC, 1);
    nodeC.ConnectNode(&nodeD, 1);

    /*nodeA.PrintChildren();
    nodeB.PrintChildren();
    nodeC.PrintChildren();
    nodeD.PrintChildren();*/

    AStar(&nodeB, &nodeD);
    
}

void AStar(Node* startNode, Node* endNode)
{
    list<Node*> openNodes;
    list<Node*> closedNodes;

    openNodes.push_back(startNode);
    Node* currentNode = nullptr;

    while (openNodes.size() > 0)
    {
        currentNode = GetLowestCostNode(&openNodes);

        if (currentNode->m_name == endNode->m_name)
        {
            //end search. Found node!
            cout << endl << "Found target! Node " << startNode->m_name
                << " to " << currentNode->TotalCost << endl;

            Node* pathNode = currentNode;
            list<string> pathNodes;
            while (pathNode != nullptr)
            {
                pathNodes.push_back(pathNode->m_name);
                pathNode = pathNode->Parent;
            }
            while (pathNodes.size() > 1)
            {

                cout << pathNodes.back() << "  ->  ";
                pathNodes.pop_back();
            }

            cout << pathNodes.back() << endl << endl;

            break;
        }

        for (auto const& edge : *currentNode->m_pChild)
        {
            cout << "Scanning edge from " << currentNode->m_name
                << " to " << edge.m_node->m_name << "..." << endl;

            int childTotalCost = edge.m_cost + currentNode->TotalCost;

            if (LinearSearch(&openNodes, edge.m_node))
            {
                if (childTotalCost >= edge.m_node->TotalCost)
                    continue;
            }
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
