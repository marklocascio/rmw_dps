// Copyright 2019 Intel Corporation All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <dps/event.h>
#include <algorithm>
#include <string>
#include <vector>

#include "rcutils/logging_macros.h"

#include "rmw/error_handling.h"

#include "rmw_dps_cpp/custom_node_info.hpp"
#include "rmw_dps_cpp/names_common.hpp"

std::string
_get_dps_topic_name(size_t domain_id, const char * ros_topic_name)
{
  // Valid topic names start with a separator so prefix the domain_id to separate nodes
  return std::to_string(domain_id) + ros_topic_name;
}

std::string
_get_dps_topic_name(size_t domain_id, const std::string & ros_topic_name)
{
  // Valid topic names start with a separator so prefix the domain_id to separate nodes
  return std::to_string(domain_id) + ros_topic_name;
}
