// Copyright 2018 Husky Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "core-metadata/metadata/model/tbl_col_ref.hpp"

#include <string>

#include "core-metadata/metadata/model/column_desc.hpp"
#include "core-metadata/metadata/model/table_ref.hpp"

namespace husky {
namespace cube {

TblColRef::TblColRef(TableRef* table, ColumnDesc* column) : table_(table), column_(column) {
    identity_ = get_table_alias() + "." + get_name();
}

const std::string& TblColRef::get_table_alias() const { return table_->get_alias(); }

}  // namespace cube
}  // namespace husky
