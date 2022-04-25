
package(default_visibility = ["//visibility:private"])

package_group(
    name = "mediapipe_internal",
    packages = [
        "//mediapipe/...",
    ],
)

cc_library(
  name = "calculator_graph",
  srcs = ["calculator_graph.cc"],
  hdrs = ["calculator_graph.h"],
  visibility = [":mediapipe_internal"],
  deps = [
    "@com_google_absl//absl/base:core_headers",
    "@com_google_absl//absl/container:fixed_array",
    "@com_google_absl//absl/container:flat_hash_map",
    "@com_google_absl//absl/container:flat_hash_set",
    "@com_google_absl//absl/memory",
    "@com_google_absl//absl/status",
    "@com_google_absl//absl/strings",
    "@com_google_absl//absl/strings:str_format",
    "@com_google_absl//absl/synchronization"
  ]
)