#pragma once

#include <await/executors/static_thread_pool.hpp>

#include "knapsack.hpp"

using await::executors::IThreadPoolPtr;

struct Context {
  // executor / thread pool
  IThreadPoolPtr tp;

  // knapsack and current item
  const knapsack::Knapsack& knapsack;
  std::size_t cursor{0};

  // accumulated price and weight for current set of included items
  int current_price{0};
  int current_weight{0};
};
