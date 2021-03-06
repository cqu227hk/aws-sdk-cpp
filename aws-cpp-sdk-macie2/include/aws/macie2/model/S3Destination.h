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
   * <p>Specifies an S3 bucket to export data classification results to, and the
   * encryption settings to use when storing results in that bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/S3Destination">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API S3Destination
  {
  public:
    S3Destination();
    S3Destination(Aws::Utils::Json::JsonView jsonValue);
    S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline S3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline S3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This must be the ARN of an
     * existing bucket.</p>
     */
    inline S3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service master key
     * to use for encryption of the exported results. This must be the ARN of an
     * existing KMS key. In addition, the key must be in the same AWS Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
