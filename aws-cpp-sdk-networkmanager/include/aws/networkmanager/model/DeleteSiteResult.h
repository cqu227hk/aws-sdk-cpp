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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Site.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API DeleteSiteResult
  {
  public:
    DeleteSiteResult();
    DeleteSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the site.</p>
     */
    inline const Site& GetSite() const{ return m_site; }

    /**
     * <p>Information about the site.</p>
     */
    inline void SetSite(const Site& value) { m_site = value; }

    /**
     * <p>Information about the site.</p>
     */
    inline void SetSite(Site&& value) { m_site = std::move(value); }

    /**
     * <p>Information about the site.</p>
     */
    inline DeleteSiteResult& WithSite(const Site& value) { SetSite(value); return *this;}

    /**
     * <p>Information about the site.</p>
     */
    inline DeleteSiteResult& WithSite(Site&& value) { SetSite(std::move(value)); return *this;}

  private:

    Site m_site;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
