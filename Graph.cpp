#include "Graph.hpp"

void ariel::Graph::loadGraph(std::vector<vector<int>>> m)
{
    for(int i =0; i<m.size(); i++)
    {
        if (m[i].size() != m.size())
            throw new std::invalid_argument("not enough v");
    }
    for (int i = 0; i<m.size(); i++)
    {
        v[i] = i;
    }
    for (int i=0; i<m.size(); i++)
    {
        for (int j = 0; j<m.size(); j++)
        {
            if(m[i,j] != 0)
            {
                e[std::make_pair(i,j)]=m[i,j];
            }
        }
    }

}


void ariel::Graph::printGraph()
{
    std::cout << "Graph with" <<m.size()<< "vertices and" <<e.size()<< "edges.";
}