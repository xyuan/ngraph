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

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
//#include <string>
#include "ngraph/ops/multiply.hpp"
#include "pyngraph/ops/multiply.hpp"

namespace py = pybind11;

void regclass_pyngraph_op_Multiply(py::module m)
{
    py::class_<ngraph::op::Multiply,
               std::shared_ptr<ngraph::op::Multiply>,
               ngraph::op::util::BinaryElementwiseArithmetic>
        multiply(m, "Multiply");
    multiply.doc() = "ngraph.impl.op.Multiply wraps ngraph::op::Multiply";
    multiply.def(
        py::init<const std::shared_ptr<ngraph::Node>&, const std::shared_ptr<ngraph::Node>&>());
}
