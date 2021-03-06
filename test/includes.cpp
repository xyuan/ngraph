
/*******************************************************************************
* Copyright 2017-2018 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include <string>
#include <vector>

#include "gtest/gtest.h"

#include "ngraph/codegen/compiler.hpp"
#include "ngraph/log.hpp"
#include "ngraph/util.hpp"

using namespace std;
using namespace ngraph;

TEST(DISABLED_include, complete)
{
    vector<string> include_files = {"ngraph/autodiff/adjoints.hpp",
                                    "ngraph/axis_set.hpp",
                                    "ngraph/axis_vector.hpp",
                                    "ngraph/builder/autobroadcast.hpp",
                                    "ngraph/builder/numpy_transpose.hpp",
                                    "ngraph/builder/reduce_ops.hpp",
                                    "ngraph/builder/xla_tuple.hpp",
                                    "ngraph/codegen/code_writer.hpp",
                                    "ngraph/codegen/compiler.hpp",
                                    "ngraph/codegen/execution_engine.hpp",
                                    "ngraph/coordinate.hpp",
                                    "ngraph/coordinate_diff.hpp",
                                    "ngraph/coordinate_transform.hpp",
                                    "ngraph/descriptor/buffer.hpp",
                                    "ngraph/descriptor/buffer_pos.hpp",
                                    "ngraph/descriptor/input.hpp",
                                    "ngraph/descriptor/layout/dense_tensor_view_layout.hpp",
                                    "ngraph/descriptor/layout/tensor_view_layout.hpp",
                                    "ngraph/descriptor/output.hpp",
                                    "ngraph/descriptor/primary_tensor_view.hpp",
                                    "ngraph/descriptor/tensor.hpp",
                                    "ngraph/descriptor/tensor_view.hpp",
                                    "ngraph/except.hpp",
                                    "ngraph/file_util.hpp",
                                    "ngraph/function.hpp",
                                    "ngraph/graph_util.hpp",
                                    "ngraph/log.hpp",
                                    "ngraph/ngraph.hpp",
                                    "ngraph/node.hpp",
                                    "ngraph/node_vector.hpp",
                                    "ngraph/ops/abs.hpp",
                                    "ngraph/ops/acos.hpp",
                                    "ngraph/ops/add.hpp",
                                    "ngraph/ops/allreduce.hpp",
                                    "ngraph/ops/asin.hpp",
                                    "ngraph/ops/atan.hpp",
                                    "ngraph/ops/avg_pool.hpp",
                                    "ngraph/ops/batch_norm.hpp",
                                    "ngraph/ops/broadcast.hpp",
                                    "ngraph/ops/ceiling.hpp",
                                    "ngraph/ops/concat.hpp",
                                    "ngraph/ops/constant.hpp",
                                    "ngraph/ops/convert.hpp",
                                    "ngraph/ops/convolution.hpp",
                                    "ngraph/ops/cos.hpp",
                                    "ngraph/ops/cosh.hpp",
                                    "ngraph/ops/divide.hpp",
                                    "ngraph/ops/dot.hpp",
                                    "ngraph/ops/equal.hpp",
                                    "ngraph/ops/exp.hpp",
                                    "ngraph/ops/floor.hpp",
                                    "ngraph/ops/function_call.hpp",
                                    "ngraph/ops/get_output_element.hpp",
                                    "ngraph/ops/greater.hpp",
                                    "ngraph/ops/greater_eq.hpp",
                                    "ngraph/ops/less.hpp",
                                    "ngraph/ops/less_eq.hpp",
                                    "ngraph/ops/log.hpp",
                                    "ngraph/ops/max.hpp",
                                    "ngraph/ops/maximum.hpp",
                                    "ngraph/ops/max_pool.hpp",
                                    "ngraph/ops/min.hpp",
                                    "ngraph/ops/minimum.hpp",
                                    "ngraph/ops/multiply.hpp",
                                    "ngraph/ops/negative.hpp",
                                    "ngraph/ops/not.hpp",
                                    "ngraph/ops/not_equal.hpp",
                                    "ngraph/ops/one_hot.hpp",
                                    "ngraph/ops/op.hpp",
                                    "ngraph/ops/pad.hpp",
                                    "ngraph/ops/parameter.hpp",
                                    "ngraph/ops/parameter_vector.hpp",
                                    "ngraph/ops/power.hpp",
                                    "ngraph/ops/product.hpp",
                                    "ngraph/ops/reduce.hpp",
                                    "ngraph/ops/reduce_window.hpp",
                                    "ngraph/ops/relu.hpp",
                                    "ngraph/ops/remainder.hpp",
                                    "ngraph/ops/replace_slice.hpp",
                                    "ngraph/ops/reshape.hpp",
                                    "ngraph/ops/reverse.hpp",
                                    "ngraph/ops/select.hpp",
                                    "ngraph/ops/select_and_scatter.hpp",
                                    "ngraph/ops/sign.hpp",
                                    "ngraph/ops/sin.hpp",
                                    "ngraph/ops/sinh.hpp",
                                    "ngraph/ops/slice.hpp",
                                    "ngraph/ops/sqrt.hpp",
                                    "ngraph/ops/subtract.hpp",
                                    "ngraph/ops/sum.hpp",
                                    "ngraph/ops/tan.hpp",
                                    "ngraph/ops/tanh.hpp",
                                    "ngraph/ops/util/arithmetic_reduction.hpp",
                                    "ngraph/ops/util/binary_elementwise.hpp",
                                    "ngraph/ops/util/binary_elementwise_arithmetic.hpp",
                                    "ngraph/ops/util/binary_elementwise_comparison.hpp",
                                    "ngraph/ops/util/op_annotations.hpp",
                                    "ngraph/ops/util/requires_tensor_view_args.hpp",
                                    "ngraph/ops/util/unary_elementwise.hpp",
                                    "ngraph/ops/util/unary_elementwise_arithmetic.hpp",
                                    "ngraph/pass/assign_layout.hpp",
                                    "ngraph/pass/assign_placement.hpp",
                                    "ngraph/pass/dump_sorted.hpp",
                                    "ngraph/pass/graph_rewrite.hpp",
                                    "ngraph/pass/inliner.hpp",
                                    "ngraph/pass/liveness.hpp",
                                    "ngraph/pass/manager.hpp",
                                    "ngraph/pass/manager_state.hpp",
                                    "ngraph/pass/memory_layout.hpp",
                                    "ngraph/pass/memory_visualize.hpp",
                                    "ngraph/pass/pass.hpp",
                                    "ngraph/pass/reshape_elimination.hpp",
                                    "ngraph/pass/visualize_tree.hpp",
                                    "ngraph/pattern/core_fusion.hpp",
                                    "ngraph/pattern/matcher.hpp",
                                    "ngraph/pattern/op/any.hpp",
                                    "ngraph/pattern/op/label.hpp",
                                    "ngraph/pattern/op/pattern.hpp",
                                    "ngraph/placement.hpp",
                                    "ngraph/runtime/aligned_buffer.hpp",
                                    "ngraph/runtime/backend.hpp",
                                    "ngraph/runtime/call_frame.hpp",
                                    "ngraph/runtime/cpu/cpu_backend.hpp",
                                    "ngraph/runtime/cpu/cpu_call_frame.hpp",
                                    "ngraph/runtime/cpu/cpu_eigen_utils.hpp",
                                    "ngraph/runtime/cpu/cpu_emitter.hpp",
                                    "ngraph/runtime/cpu/cpu_external_function.hpp",
                                    "ngraph/runtime/cpu/cpu_kernels.hpp",
                                    "ngraph/runtime/cpu/cpu_kernel_emitters.hpp",
                                    "ngraph/runtime/cpu/cpu_kernel_utils.hpp",
                                    "ngraph/runtime/cpu/cpu_layout_descriptor.hpp",
                                    "ngraph/runtime/cpu/cpu_manager.hpp",
                                    "ngraph/runtime/cpu/cpu_op_annotations.hpp",
                                    "ngraph/runtime/cpu/cpu_runtime_context.hpp",
                                    "ngraph/runtime/cpu/cpu_tensor_view.hpp",
                                    "ngraph/runtime/cpu/cpu_tensor_view_wrapper.hpp",
                                    "ngraph/runtime/cpu/cpu_tracing.hpp",
                                    "ngraph/runtime/cpu/mkldnn_emitter.hpp",
                                    "ngraph/runtime/cpu/mkldnn_invoke.hpp",
                                    "ngraph/runtime/cpu/mkldnn_utils.hpp",
                                    "ngraph/runtime/cpu/ops/convert_layout.hpp",
                                    "ngraph/runtime/cpu/ops/matmul_bias.hpp",
                                    "ngraph/runtime/cpu/pass/cpu_assignment.hpp",
                                    "ngraph/runtime/cpu/pass/cpu_fusion.hpp",
                                    "ngraph/runtime/cpu/pass/cpu_layout.hpp",
                                    "ngraph/runtime/external_function.hpp",
                                    // "ngraph/runtime/gpu/gpu_backend.hpp",
                                    // "ngraph/runtime/gpu/gpu_call_frame.hpp",
                                    // "ngraph/runtime/gpu/gpu_cuda_context_manager.hpp",
                                    // "ngraph/runtime/gpu/gpu_cuda_function_builder.hpp",
                                    // "ngraph/runtime/gpu/gpu_cuda_function_pool.hpp",
                                    // "ngraph/runtime/gpu/gpu_cuda_kernel_builder.hpp",
                                    // "ngraph/runtime/gpu/gpu_cuda_kernel_emitters.hpp",
                                    // "ngraph/runtime/gpu/gpu_emitter.hpp",
                                    // "ngraph/runtime/gpu/gpu_external_function.hpp",
                                    // "ngraph/runtime/gpu/gpu_kernel_emitters.hpp",
                                    // "ngraph/runtime/gpu/gpu_manager.hpp",
                                    // "ngraph/runtime/gpu/gpu_tensor_view.hpp",
                                    // "ngraph/runtime/gpu/gpu_tensor_view_wrapper.hpp",
                                    // "ngraph/runtime/gpu/gpu_util.hpp",
                                    "ngraph/runtime/host_tensor_view.hpp",
                                    "ngraph/runtime/interpreter/int_backend.hpp",
                                    "ngraph/runtime/interpreter/int_call_frame.hpp",
                                    "ngraph/runtime/interpreter/int_external_function.hpp",
                                    "ngraph/runtime/interpreter/int_kernels.hpp",
                                    "ngraph/runtime/interpreter/int_manager.hpp",
                                    "ngraph/runtime/kernel/abs.hpp",
                                    "ngraph/runtime/kernel/acos.hpp",
                                    "ngraph/runtime/kernel/add.hpp",
                                    "ngraph/runtime/kernel/allreduce.hpp",
                                    "ngraph/runtime/kernel/asin.hpp",
                                    "ngraph/runtime/kernel/atan.hpp",
                                    "ngraph/runtime/kernel/avg_pool.hpp",
                                    "ngraph/runtime/kernel/broadcast.hpp",
                                    "ngraph/runtime/kernel/ceiling.hpp",
                                    "ngraph/runtime/kernel/concat.hpp",
                                    "ngraph/runtime/kernel/constant.hpp",
                                    "ngraph/runtime/kernel/convert.hpp",
                                    "ngraph/runtime/kernel/convolution.hpp",
                                    "ngraph/runtime/kernel/copy.hpp",
                                    "ngraph/runtime/kernel/cos.hpp",
                                    "ngraph/runtime/kernel/cosh.hpp",
                                    "ngraph/runtime/kernel/divide.hpp",
                                    "ngraph/runtime/kernel/dot.hpp",
                                    "ngraph/runtime/kernel/equal.hpp",
                                    "ngraph/runtime/kernel/exp.hpp",
                                    "ngraph/runtime/kernel/floor.hpp",
                                    "ngraph/runtime/kernel/greater.hpp",
                                    "ngraph/runtime/kernel/greater_eq.hpp",
                                    "ngraph/runtime/kernel/less.hpp",
                                    "ngraph/runtime/kernel/less_eq.hpp",
                                    "ngraph/runtime/kernel/log.hpp",
                                    "ngraph/runtime/kernel/max.hpp",
                                    "ngraph/runtime/kernel/maximum.hpp",
                                    "ngraph/runtime/kernel/max_pool.hpp",
                                    "ngraph/runtime/kernel/min.hpp",
                                    "ngraph/runtime/kernel/minimum.hpp",
                                    "ngraph/runtime/kernel/multiply.hpp",
                                    "ngraph/runtime/kernel/negate.hpp",
                                    "ngraph/runtime/kernel/not.hpp",
                                    "ngraph/runtime/kernel/not_equal.hpp",
                                    "ngraph/runtime/kernel/one_hot.hpp",
                                    "ngraph/runtime/kernel/pad.hpp",
                                    "ngraph/runtime/kernel/power.hpp",
                                    "ngraph/runtime/kernel/product.hpp",
                                    "ngraph/runtime/kernel/reduce.hpp",
                                    "ngraph/runtime/kernel/reduce_window.hpp",
                                    "ngraph/runtime/kernel/relu.hpp",
                                    "ngraph/runtime/kernel/replace_slice.hpp",
                                    "ngraph/runtime/kernel/reshape.hpp",
                                    "ngraph/runtime/kernel/reverse.hpp",
                                    "ngraph/runtime/kernel/select.hpp",
                                    "ngraph/runtime/kernel/select_and_scatter.hpp",
                                    "ngraph/runtime/kernel/sign.hpp",
                                    "ngraph/runtime/kernel/sin.hpp",
                                    "ngraph/runtime/kernel/sinh.hpp",
                                    "ngraph/runtime/kernel/slice.hpp",
                                    "ngraph/runtime/kernel/sqrt.hpp",
                                    "ngraph/runtime/kernel/subtract.hpp",
                                    "ngraph/runtime/kernel/sum.hpp",
                                    "ngraph/runtime/kernel/tan.hpp",
                                    "ngraph/runtime/kernel/tanh.hpp",
                                    "ngraph/runtime/manager.hpp",
                                    "ngraph/runtime/tensor_view.hpp",
                                    "ngraph/serializer.hpp",
                                    "ngraph/shape.hpp",
                                    "ngraph/strides.hpp",
                                    "ngraph/types/element_type.hpp",
                                    "ngraph/types/type.hpp",
                                    "ngraph/util.hpp",
                                    "ngraph/uuid.hpp"};

    for (const string& include : include_files)
    {
        string source = "#include <" + include + ">\n ";

        stopwatch timer;
        timer.start();
        codegen::Compiler compiler;
        compiler.add_header_search_path(JSON_INCLUDES);
        auto module = compiler.compile(source);
        timer.stop();
        ASSERT_NE(nullptr, module) << source;
        // NGRAPH_INFO << timer.get_milliseconds() << " " << source;
    }
}
