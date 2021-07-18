#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <cassert>
#include <chrono>
#include <memory>

class ResponseHandler {
public:
    virtual void HandleResponse(const std::vector<std::string>& response) = 0;
    virtual ~ResponseHandler() = default;
};

std::shared_ptr<ResponseHandler> MakeOstreamResponseHandler(std::ostream& out);
std::shared_ptr<ResponseHandler> MakeFileResponseHandler(const std::string& file_name);
