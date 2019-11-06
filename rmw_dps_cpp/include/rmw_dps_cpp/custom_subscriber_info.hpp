// Copyright 2018 Intel Corporation All rights reserved.
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

#ifndef RMW_DPS_CPP__CUSTOM_SUBSCRIBER_INFO_HPP_
#define RMW_DPS_CPP__CUSTOM_SUBSCRIBER_INFO_HPP_

#include <dps/dps.h>

#include <string>

#include "rmw/rmw.h"

class Listener;

typedef struct CustomSubscriberInfo
{
  const rmw_node_t * node_;
  DPS_Subscription * subscription_;
  Listener * listener_;
  void * type_support_;
  const char * typesupport_identifier_;
  rmw_qos_profile_t qos_;
  std::string discovery_name_;
} CustomSubscriberInfo;

#endif  // RMW_DPS_CPP__CUSTOM_SUBSCRIBER_INFO_HPP_
