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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies which S3 buckets contain the objects that a classification job
   * analyzes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/S3BucketDefinitionForJob">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API S3BucketDefinitionForJob
  {
  public:
    S3BucketDefinitionForJob();
    S3BucketDefinitionForJob(Aws::Utils::Json::JsonView jsonValue);
    S3BucketDefinitionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the AWS account that owns one or more of the
     * buckets. If specified, the job analyzes objects in all the buckets that are
     * owned by the account and meet other conditions specified for the job.</p>
     */
    inline S3BucketDefinitionForJob& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline void SetBuckets(const Aws::Vector<Aws::String>& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline void SetBuckets(Aws::Vector<Aws::String>&& value) { m_bucketsHasBeenSet = true; m_buckets = std::move(value); }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithBuckets(const Aws::Vector<Aws::String>& value) { SetBuckets(value); return *this;}

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& WithBuckets(Aws::Vector<Aws::String>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(const Aws::String& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(Aws::String&& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists the names of the buckets.</p>
     */
    inline S3BucketDefinitionForJob& AddBuckets(const char* value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
