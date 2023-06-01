#pragma once

#include <graaflib/graph.h>
#include <graaflib/types.h>

namespace graaf::algorithm {

enum class mst_algorithm { PRIM, KRUSKAL };

/**
 * @brief Computes the minimum spanning tree of a graph.
 * @tparam ALGORITHM Tag to specify the MST algorithm, can be either PRIM or
 * KRUSKAL.
 * @param graph The graph for which to compute the MST.
 * @return A new graph object representing the MST.
 */
template <mst_algorithm ALGORITHM, typename V, typename E, graph_spec S>
graph<V, E, S> minimum_spanning_tree(const graph<V, E, S> &graph);

}  // namespace graaf::algorithm

#include "minimum_spanning_tree.tpp"