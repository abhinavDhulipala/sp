#include <memory>

#include "graph.h"

int main(int argc, char** argv) {
  auto graph = std::make_shared<Graph>();
  if (argc > 1) {
    // Read MatrixMarket file
    std::string filename = argv[1];
    graph->read_graph_matrix_market(filename);
  } else
    graph->generate_simple_graph();

  graph->dijkstra();
}
