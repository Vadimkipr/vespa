# Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
vespa_add_executable(staging_vespalib_floatingpointtype_test_app TEST
    SOURCES
    floatingpointtypetest.cpp
    DEPENDS
    staging_vespalib
)
vespa_add_test(NAME staging_vespalib_floatingpointtype_test_app COMMAND staging_vespalib_floatingpointtype_test_app)
