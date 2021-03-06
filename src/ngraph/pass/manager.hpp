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

#pragma once

#include <list>
#include <memory>
#include <vector>

#include "ngraph/pass/manager_state.hpp"
#include "ngraph/pass/pass.hpp"

namespace ngraph
{
    namespace pass
    {
        class Manager;
        class ManagerState;
    }
}

class ngraph::pass::Manager
{
public:
    Manager();
    Manager(bool to_set_is_output);
    ~Manager();

    void initialize_default_passes();

    template <typename T, class... Args>
    void register_pass(Args... args)
    {
        static_assert(std::is_base_of<pass::PassBase, T>::value, "pass not derived from pass base");
        auto pass = std::make_shared<T>(args...);
        auto pass_base = std::static_pointer_cast<PassBase>(pass);
        m_pass_list.push_back(pass_base);
    }

    void run_passes(std::shared_ptr<Function>);

    ManagerState& get_state();

private:
    std::vector<std::shared_ptr<PassBase>> m_pass_list;
    ManagerState m_state;
};
