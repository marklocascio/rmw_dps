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

#include "rmw_dps_cpp/namespace_prefix.hpp"

extern "C"
{
const char * const dps_uuid_prefix = "uuid=";
const char * const dps_namespace_prefix = "namespace=";
const char * const dps_name_prefix = "name=";
const char * const dps_subscriber_prefix = "subscriber&topic=";
const char * const dps_publisher_prefix = "publisher&topic=";
const char * const dps_service_prefix = "service&topic=";
const char * const dps_client_prefix = "client&topic=";
}  // extern "C"
