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

#ifndef RMW_DPS_CPP__NAMESPACE_PREFIX_HPP_
#define RMW_DPS_CPP__NAMESPACE_PREFIX_HPP_

#include "rmw/visibility_control.h"

extern "C"
{
extern const char * const dps_uuid_prefix;
extern const char * const dps_namespace_prefix;
extern const char * const dps_name_prefix;
extern const char * const dps_subscriber_prefix;
extern const char * const dps_publisher_prefix;
extern const char * const dps_service_prefix;
extern const char * const dps_client_prefix;
}  // extern "C"

#endif  // RMW_DPS_CPP__NAMESPACE_PREFIX_HPP_
