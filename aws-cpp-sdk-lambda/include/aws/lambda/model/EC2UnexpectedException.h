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

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>AWS Lambda received an unexpected EC2 client exception while setting up for
   * the Lambda function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EC2UnexpectedException">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EC2UnexpectedException
  {
  public:
    EC2UnexpectedException();
    EC2UnexpectedException(Aws::Utils::Json::JsonView jsonValue);
    EC2UnexpectedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline EC2UnexpectedException& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline EC2UnexpectedException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline EC2UnexpectedException& WithType(const char* value) { SetType(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline EC2UnexpectedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline EC2UnexpectedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline EC2UnexpectedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetEC2ErrorCode() const{ return m_eC2ErrorCode; }

    
    inline bool EC2ErrorCodeHasBeenSet() const { return m_eC2ErrorCodeHasBeenSet; }

    
    inline void SetEC2ErrorCode(const Aws::String& value) { m_eC2ErrorCodeHasBeenSet = true; m_eC2ErrorCode = value; }

    
    inline void SetEC2ErrorCode(Aws::String&& value) { m_eC2ErrorCodeHasBeenSet = true; m_eC2ErrorCode = std::move(value); }

    
    inline void SetEC2ErrorCode(const char* value) { m_eC2ErrorCodeHasBeenSet = true; m_eC2ErrorCode.assign(value); }

    
    inline EC2UnexpectedException& WithEC2ErrorCode(const Aws::String& value) { SetEC2ErrorCode(value); return *this;}

    
    inline EC2UnexpectedException& WithEC2ErrorCode(Aws::String&& value) { SetEC2ErrorCode(std::move(value)); return *this;}

    
    inline EC2UnexpectedException& WithEC2ErrorCode(const char* value) { SetEC2ErrorCode(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_eC2ErrorCode;
    bool m_eC2ErrorCodeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
