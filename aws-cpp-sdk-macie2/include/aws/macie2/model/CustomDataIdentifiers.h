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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/CustomDetection.h>
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
   * <p>Provides information about the number of occurrences of the data that
   * produced a sensitive data finding, and the custom data identifiers that detected
   * the data for the finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/CustomDataIdentifiers">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API CustomDataIdentifiers
  {
  public:
    CustomDataIdentifiers();
    CustomDataIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    CustomDataIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline const Aws::Vector<CustomDetection>& GetDetections() const{ return m_detections; }

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline void SetDetections(const Aws::Vector<CustomDetection>& value) { m_detectionsHasBeenSet = true; m_detections = value; }

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline void SetDetections(Aws::Vector<CustomDetection>&& value) { m_detectionsHasBeenSet = true; m_detections = std::move(value); }

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& WithDetections(const Aws::Vector<CustomDetection>& value) { SetDetections(value); return *this;}

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& WithDetections(Aws::Vector<CustomDetection>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& AddDetections(const CustomDetection& value) { m_detectionsHasBeenSet = true; m_detections.push_back(value); return *this; }

    /**
     * <p>The names of the custom data identifiers that detected the data, and the
     * number of occurrences of the data that each identifier detected.</p>
     */
    inline CustomDataIdentifiers& AddDetections(CustomDetection&& value) { m_detectionsHasBeenSet = true; m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of occurrences of the data that was detected by the custom
     * data identifiers and produced the finding.</p>
     */
    inline CustomDataIdentifiers& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<CustomDetection> m_detections;
    bool m_detectionsHasBeenSet;

    long long m_totalCount;
    bool m_totalCountHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
