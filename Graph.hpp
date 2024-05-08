#include <iostream>
#include <set>
#include <map>
#include <pair>
#include <vector>

namespace ariel
{
    class Graph
    {
        private: 
            std::set <int> v;
            std::map <std::pair<int, int>, int> e;

        public:
            void loadGraph(std::vector<vector<int>>>);
            void printGraph();
    }
}