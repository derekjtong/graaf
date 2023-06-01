#pragma once

namespace graaf::algorithm {

namespace detail {

template <typename V, typename E, graph_spec S>
graph<V, E, S> prim(const graph<V, E, S>& graph) {
  graph<V, E, S> mst;
  // TODO: Implement Prim's algorithm
  // ...
  return mst;
}

template <typename V, typename E, graph_spec S>
graph<V, E, S> kruskal(const graph<V, E, S>& g) {
  graph<V, E, S> mst;
  // TODO: Implement Kruskal's algorithm
  // ...
  return mst;
}

}  // namespace detail

template <mst_algorithm ALGORITHM, typename V, typename E, graph_spec S>
graph<V, E, S> minimum_spanning_tree(const graph<V, E, S>& graph) {
  using enum mst_algorithm;
  if constexpr (ALGORITHM == PRIM) {
    return detail::prim(graph);
  }

  if constexpr (ALGORITHM == KRUSKAL) {
    return detail::kruskal(graph);
  }

  // We should never reach this
  std::abort();
}
}  // namespace graaf::algorithm