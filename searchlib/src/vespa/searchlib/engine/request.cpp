// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#include "request.h"

namespace search {
namespace engine {

Request::Request() :
    _startTime(fastos::ClockSystem::now()),
    _timeOfDoom(fastos::TimeStamp(fastos::TimeStamp::FUTURE)),
    ranking(),
    queryFlags(0),
    location(),
    propertiesMap(),
    stackItems(0),
    stackDump()
{
}

void Request::setTimeout(const fastos::TimeStamp & timeout)
{
    _timeOfDoom = _startTime + timeout;
}

fastos::TimeStamp Request::getTimeUsed() const
{
    return fastos::TimeStamp(fastos::ClockSystem::now()) - _startTime;
}

fastos::TimeStamp Request::getTimeLeft() const
{
    return _timeOfDoom - fastos::TimeStamp(fastos::ClockSystem::now());
}

Request::~Request()
{
}

} // namespace engine
} // namespace search
