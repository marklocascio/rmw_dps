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

#ifndef TEST_FIXTURES_HPP_
#define TEST_FIXTURES_HPP_

class test_fixture_rmw : public ::testing::Test
{
protected:
  void
  SetUp() override
  {
    rmw_ret_t ret;
    init_options = rmw_get_zero_initialized_init_options();
    ret = rmw_init_options_init(&init_options, rcutils_get_default_allocator());
    ASSERT_EQ(RMW_RET_OK, ret);
    context = rmw_get_zero_initialized_context();
    context.implementation_identifier = rmw_get_implementation_identifier();
    ret = rmw_init(&init_options, &context);
    ASSERT_EQ(RMW_RET_OK, ret);
    security_options = rmw_get_default_node_security_options();
  }

  void
  TearDown() override
  {
    rmw_ret_t ret;
    ret = rmw_shutdown(&context);
    ASSERT_EQ(RMW_RET_OK, ret);
    ret = rmw_context_fini(&context);
    ASSERT_EQ(RMW_RET_OK, ret);
    ret = rmw_init_options_fini(&init_options);
    ASSERT_EQ(RMW_RET_OK, ret);
  }

  rmw_init_options_t init_options;
  rmw_context_t context;
  rmw_node_security_options_t security_options;
};

class test_fixture_node : public test_fixture_rmw
{
protected:
  void
  SetUp() override
  {
    test_fixture_rmw::SetUp();
    node = rmw_create_node(&context, "test_node", "/", 0, &security_options);
    ASSERT_TRUE(nullptr != node);
  }

  void
  TearDown() override
  {
    rmw_ret_t ret = rmw_destroy_node(node);
    ASSERT_EQ(RMW_RET_OK, ret);
    test_fixture_rmw::TearDown();
  }

  rmw_node_t * node;
};

#endif  // TEST_FIXTURES_HPP_
