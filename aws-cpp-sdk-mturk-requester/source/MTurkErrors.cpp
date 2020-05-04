﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mturk-requester/MTurkErrors.h>
#include <aws/mturk-requester/model/ServiceFault.h>
#include <aws/mturk-requester/model/RequestError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MTurk;
using namespace Aws::MTurk::Model;

namespace Aws
{
namespace MTurk
{
template<> AWS_MTURK_API ServiceFault MTurkError::GetModeledError()
{
  assert(this->GetErrorType() == MTurkErrors::SERVICE_FAULT);
  return ServiceFault(this->GetJsonPayload().View());
}

template<> AWS_MTURK_API RequestError MTurkError::GetModeledError()
{
  assert(this->GetErrorType() == MTurkErrors::REQUEST);
  return RequestError(this->GetJsonPayload().View());
}

namespace MTurkErrorMapper
{

static const int SERVICE_FAULT_HASH = HashingUtils::HashString("ServiceFault");
static const int REQUEST_HASH = HashingUtils::HashString("RequestError");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::SERVICE_FAULT), false);
  }
  else if (hashCode == REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MTurkErrorMapper
} // namespace MTurk
} // namespace Aws
