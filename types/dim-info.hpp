/******************************************************************************
* Copyright (c) 2016, Connor Manning (connor@hobu.co)
*
* Entwine -- Point cloud indexing
*
* Entwine is available under the terms of the LGPL2 license. See COPYING
* for specific license text and more information.
*
******************************************************************************/

#pragma once

#include <cstdint>
#include <string>

#include <pdal/Dimension.hpp>

class DimInfo
{
public:
    DimInfo(
            const std::string& name,
            const std::string& baseTypeName,
            std::size_t size);

    std::string name() const;
    pdal::Dimension::Id::Enum id() const;
    pdal::Dimension::Type::Enum type() const;
    std::size_t size() const;

    void setId(pdal::Dimension::Id::Enum id);

private:
    const std::string m_name;
    pdal::Dimension::Id::Enum m_id;
    const pdal::Dimension::Type::Enum m_type;
};
