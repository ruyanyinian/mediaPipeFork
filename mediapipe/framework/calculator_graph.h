#ifndef MEDIAPIPE_FRAMEWORK_CALCULATOR_GRAPH_H_
#define MEDIAPIPE_FRAMEWORK_CALCULATOR_GRAPH_H_

#include <atomic>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "absl/base/macros.h"
#include "absl/container/fixed_array.h"
#include "absl/container/flat_hash_map.h"
#include "absl/container/flat_hash_set.h"
#include "absl/synchronization/mutex.h"

namespace mediapipe {
class CalculatorGraphConfig; // 目前先前置声明
/*这个是模块化subgraph, 包含了input和output streams类似于calculator public interface */
class CalculatorGraph {
public:
  enum class GraphInputStreamAddMode {
    WAIT_TILL_NOT_FULL,
    ADD_IF_NOT_FULL
  };

  // 创建一个默认的未初始化的图
  CalculatorGraph();
  // 禁止拷贝和构造
  CalculatorGraph(const CalculatorGraph&) = delete; // 禁止的拷贝构造感觉不需要写参数
  CalculatorGraph& operator=(const CalculatorGraph&) = delete;
  explicit CalculatorGraph(const CalculatorGraphConfig& config);
  
  virtual ~CalculatorGraph();

};
}
#endif