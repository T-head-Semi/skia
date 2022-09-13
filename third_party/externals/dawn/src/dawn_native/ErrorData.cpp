// Copyright 2018 The Dawn Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dawn_native/ErrorData.h"

namespace dawn_native {

    ErrorData::ErrorData() = default;

    ErrorData::ErrorData(ErrorType type, std::string message)
        : mType(type), mMessage(std::move(message)) {
    }

    void ErrorData::AppendBacktrace(const char* file, const char* function, int line) {
        BacktraceRecord record;
        record.file = file;
        record.function = function;
        record.line = line;

        mBacktrace.push_back(std::move(record));
    }

    ErrorType ErrorData::GetType() const {
        return mType;
    }

    const std::string& ErrorData::GetMessage() const {
        return mMessage;
    }

    const std::vector<ErrorData::BacktraceRecord>& ErrorData::GetBacktrace() const {
        return mBacktrace;
    }

}  // namespace dawn_native
