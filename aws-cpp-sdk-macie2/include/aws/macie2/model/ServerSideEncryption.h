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
#include <aws/macie2/model/EncryptionType.h>
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
   * <p>Provides information about the server-side encryption settings for an S3
   * bucket or object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/ServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ServerSideEncryption
  {
  public:
    ServerSideEncryption();
    ServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    ServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline ServerSideEncryption& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If encryption is disabled for the bucket or object, this value
     * is NONE.</p>
     */
    inline ServerSideEncryption& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
     * master key that's used to encrypt the bucket or object. This value is null if
     * KMS isn't used to encrypt the bucket or object.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}

  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet;

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
